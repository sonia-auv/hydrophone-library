% Configuration du temps
% SampleEstimate = 250e3;
% dt = 1/SampleEstimate;
% index = 500;
% pingTime = 0.001;
% stopTime = 0.01;
% timeSin = transpose(0:dt:stopTime-dt);
% pingSin = transpose(0:dt:pingTime-dt);
% time = timeSin;

% Configuration Sinus pour des tests
Fc = 40000;
%PhaseShift = sinusGen(71.5651, 71.5651, Fc)
% PhaseShift = sinusDistance(3, 1, -1, Fc);

% [out1, out2, out3, out4] = computeHyperPlans(PhaseShift(1), PhaseShift(2), PhaseShift(3), PhaseShift(4), Fc, 1500);

% PhaseShift(1) = 0;
% PhaseShift(2) = -1.085136414;
% PhaseShift(3) = -4.46664238;
% PhaseShift(4) = -0.853645325;


%% Load des phases dans l'algo uniquement
timestamp = 0.001;
T = readtable("Bags/2022-07-22/mapping-90deg-4m");
[M, N] = size(T);
SNRcheck = 0; % SNR has to be higher than the specified value
j = 0;
unWrap = false;
max180 = true;
positionArray = [];

for i = 1:M
    line = T(i,:);
    if line.x_debug >= SNRcheck
        if max180deg(line.x_phaseRef, line.x_phase1, line.x_phase2, line.x_phase3, max180)               
            positionArray = [positionArray, i];
        end
    end
end

[~, M] = size(positionArray);

timePhase = transpose(0:timestamp:(M-1)*timestamp);

diff1 = zeros(1,M);
diff2 = zeros(1,M);
diff3 = zeros(1,M);

for i = 1:M
    line = T(positionArray(i),:);
    if unWrap == true
        diff1(i) = unWrapPhase(line.x_phase1,line.x_phaseRef);
        diff2(i) = unWrapPhase(line.x_phase2,line.x_phaseRef);
        diff3(i) = unWrapPhase(line.x_phase3,line.x_phaseRef);
    else
        diff1(i) = line.x_phase1 - line.x_phaseRef;
        diff2(i) = line.x_phase2 - line.x_phaseRef;
        diff3(i) = line.x_phase3 - line.x_phaseRef;        
    end 
end

phaseDiff1 = [timePhase, transpose(diff1)];
phaseDiff2 = [timePhase, transpose(diff2)];
phaseDiff3 = [timePhase, transpose(diff3)];

%% Test de plusieurs positions dans la même simulation

pingSingleSample = 0.004; % secondes
Fstart = 25000; % start frequency
FcInc = 5000; % increments
nbInc = 1; % 4 different frequency
nbSameSample = 1; % Play the same sample 4 times
timePerSample = 1/250e3; % secondes

nbDataPerPing = pingSingleSample / timePerSample;

arrayPosition = [16, 0, 2.5]; % samples to test

% arrayPosition = [1, 0, 2.5;
%                  2, 1, 2.5;
%                  3, 3, 2.5;
%                  2, 4, 2.5;
%                  1, 5, 2.5;
%                  0, 6, 2.5]; % samples to test

[nbSamples, ~] = size(arrayPosition);
             
timeArray = transpose(0:timePerSample:(nbSamples*nbInc*...
                        nbDataPerPing*nbSameSample-1)*timePerSample);

[M, ~] = size(timeArray);

signalRef = zeros(1,M);
signal1 = zeros(1,M);
signal2 = zeros(1,M);
signal3 = zeros(1,M);

for i=1:nbSamples
    shift_phase = sinusDistance(arrayPosition(i,1), arrayPosition(i,2),...
                                arrayPosition(i,3), Fc);
    for j=1:nbInc
        Fc = Fstart + (FcInc * (j - 1));
        for k=1:nbSameSample
            for l=1:nbDataPerPing
                index = uint64(((i-1)*(nbInc*nbSameSample*nbDataPerPing))+...
                                ((j-1)*nbDataPerPing*nbSameSample)+(k-1)*nbDataPerPing...
                                +l);
                signalRef(index) = sin(2 * pi * Fc * timeArray(index) + shift_phase(1));
                signal1(index) = sin(2 * pi * Fc * timeArray(index) + shift_phase(2));
                signal2(index) = sin(2 * pi * Fc * timeArray(index) + shift_phase(3));
                signal3(index) = sin(2 * pi * Fc * timeArray(index) + shift_phase(4));
            end
        end
    end
    Fc = 0;
end

genSignalRef = [timeArray, transpose(signalRef)];
genSignal1 = [timeArray, transpose(signal1)];
genSignal2 = [timeArray, transpose(signal2)];
genSignal3 = [timeArray, transpose(signal3)];

timeToStop = (nbSamples*nbInc*nbDataPerPing*nbSameSample-1)*timePerSample * 10; % Hardcoded value

pi_2 = pi/2;

%% boulle shit
% 
% x = zeros(size(time));
% xRef = sin(2*pi*Fc*pingSin + PhaseShift(1));
% x1 = sin(2*pi*Fc*pingSin + PhaseShift(2));
% x2 = sin(2*pi*Fc*pingSin + PhaseShift(3));
% x3 = sin(2*pi*Fc*pingSin + PhaseShift(4));
% 
% sinRef_generate = [time, x];
% sin1_generate = [time, x];
% sin2_generate = [time, x];
% sin3_generate = [time, x];
% M = size(x1,1);
% 
% for k=1:size(time)
%     if k > index 
%         if k <= index+M
%             sinRef_generate(k,2) = xRef(k-index);
%             sin1_generate(k,2) = x1(k-index);
%             sin2_generate(k,2) = x2(k-index);
%             sin3_generate(k,2) = x3(k-index);
%         end
%     end
% end

%% Configuration VHDL coder + simulink

% Configuration pour FFT
FFT_LENGTH = 256;                   % Nombre de points pour la FFT
Sampling_rate = 256e3;              % Fréquence d'échantillonnage
CORDIC_Estimation = 12;

%DEPRECATED (was with the signal trigger)
% Coeff_han = hann(FFT_LENGTH);       % Coefficient pour le fenêtrage
% Coeff_rect = ones(FFT_LENGTH,1);    % Fenêtrage carré pour tester

% Configuration des limites
f_range = [20e3 45e3];              % Fréquences pour détecteur de maximum

% Configuration de bruit
noise_on_off = false;                % Activation du bruit 
noise_type = 1;                     % Type de bruit0 : uniforme, 1 : gaussien

hdlsetuptoolpath('ToolName', 'Xilinx Vivado', ...
'ToolPath', 'C:\Xilinx\Vivado\2020.2\bin\vivado.bat'); % Changer le path pour votre ordinateur

% Run le fichier avant d'ouvrir le Simulink pour avoir les constantes
% du projet et du VHDL coder