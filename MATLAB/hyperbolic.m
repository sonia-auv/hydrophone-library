%% Valeur de test
bin = 100000;
bin_result = 333564; % ns/m
Wave_Length = bin / bin_result;
WaveSpeed = 1500; % m/s
cte = 2 * pi;
one_e_10 = 1e10;

%% Valeur Hydro
HRef = [0 0 0];
H1 = [-6.77 -12.86 -4] ./1000;
H2 = [-14.5 0 -4] ./1000;
H3 = [-6.77 12.86 -4] ./1000;

%Position des hydrophones
xi = 0;
yi = 0;
zi = 0;

xj = H1(1);
yj = H1(2);
zj = H1(3);

xk = H2(1);
yk = H2(2);
zk = H2(3);

xl = H3(1);
yl = H3(2);
zl = H3(3);

j = 0;
k = 0;
phy1 = 0;
phy2 = 0;
theta1 = 0;
theta2 = 0;

% Temps
% Choisir la rangée dans le tableau à tester
for i = 1:90

    %i = 201; % Tout le temps i >= 1
    T = tabledata(i,:);

    f = 40000;
    phase = [T.phaseRef T.phase1 T.phase2 T.phase3];
    
    if T.debug > 50
        [out1, out2, out3, out4] = computeHyperPlans(T.phaseRef, T.phase1, T.phase2, T.phase3, f, WaveSpeed)
        if out2 <= pi()/2 && out2 >= 0
            phy1 = [phy1, out1];
            theta1 = [theta1, out2];
            j = j + 1;
        end
        if out4 <= pi()/2 && out4 >= 0
            phy2 = [phy2, out3];
            theta2 = [theta2, out4];
            k = k + 1;
        end
    end
end
j
k
mean(phy1)
mean(theta1)
mean(phy2)
mean(theta2)

% phaseHref = 0;
% phaseDiffH1 = T.x;
% phaseDiffH2 = T.y;
% phaseDiffH3 = T.z;

% % Unwrap the phase
% if phaseDiffH1 < 0 || phaseDiffH2 < 0 || phaseDiffH3 < 0
%     phaseHref = 2 * pi;
%     phaseDiffH1 = phaseDiffH1 + 2 * pi;
%     phaseDiffH2 = phaseDiffH2 + 2 * pi;
%     phaseDiffH3 = phaseDiffH3 + 2 * pi;
% end

% Time Difference
% timeHref = phaseHref / (cte * f);
% timeDiffH1 = phaseDiffH1 / (cte * f);
% timeDiffH2 = phaseDiffH2 / (cte * f);
% timeDiffH3 = phaseDiffH3 / (cte * f);
[lowest,] = min(phase);
timeDiff = (phase + abs(lowest)) / (cte * f);

ti = timeDiff(1); % Supposition puisqu'on a uniquement les différences de phase
tj = timeDiff(2); % H1 => (h1 - href) si href = 0 
tk = timeDiff(3); % H2
tl = timeDiff(4); % H3
%% Test 1
% % Temps
% ti = 67335898;
% tk = 86023981;
% tj = 78283279;
% tl = 75092320;
% 
% % Position des satelittes
% xi = 0;
% yi = 26566800;
% zi = 0;
% 
% xk = 0;
% yk = 6380000;
% zk = 25789348;
% 
% xj = -15338349;
% yj = 15338349;
% zj = 15338349;
% 
% xl = -18785564;
% yl = 18785564;
% zl = 0;

%% Test 2
% % Temps
% ti = 86320708;
% tk = 67335895;
% tj = 75293013;
% tl = 78283279;
% 
% % Position des satelittes
% xi = -15102069;
% yi = 21482069;
% zi = 3683495;
% 
% xk = 15338349;
% yk = 15338349;
% zk = 15338349;
% 
% xj = 0;
% yj = 6380000;
% zj = 25789348;
% 
% xl = 26566800;
% yl = 0;
% zl = 0;

%% Différence de positions
% xji = xj-xi;
% xik = xi-xk;
% ylk = yl-yk;
% zik = zi-zk;
% 
% xki = xk-xi;
% yji = yj-yi;
% yik = yi-yk;
% zjk = zj-zk;
% 
% xjk = xj-xk;
% yki = yk-yi;
% zji = zj-zi;
% zlk = zl-zk;
% 
% xlk = xl-xk;
% yjk = yj-yk;
% zki = zk-zi;
% 
% %% Calcul distance selon les différences d'arrivée
% rij = (WaveSpeed*(ti-tj));
% rkj = (WaveSpeed*(tk-tj));
% rik = (WaveSpeed*(ti-tk));
% rkl = (WaveSpeed*(tk-tl));
% 
% %% Calcul des polynomiaux
% s9 = one_e_10 * (rik * xji - rij * xki);
% s10 = rij * yki - rik * yji;
% s11 = one_e_10 * (rik * zji - rij * zki);
% s13 = one_e_10 *(rkl * xjk - rkj * xlk);
% s14 = rkj * ylk - rkl * yjk;
% s15 = one_e_10 * (rkl * zjk - rkj * zlk);
% 
% s17 = rij^2 + xi^2 - xj^2 + yi^2 - yj^2 + zi^2 - zj^2;
% s18 = rik^2 + xi^2 - xk^2 + yi^2 - yk^2 + zi^2 - zk^2;
% s19 = rkj^2 + xk^2 - xj^2 + yk^2 - yj^2 + zk^2 - zj^2;
% s20 = rkl^2 + xk^2 - xl^2 + yk^2 - yl^2 + zk^2 - zl^2;
% 
% s12 = one_e_10 * (rik * s17 - rij * s18);
% s16 = one_e_10 * (rkl * s19 - rkj * s20);
% s21 = s12 / 2;
% s22 = s16 / 2;
% %% Calcul des plans hyperboliques
% a = s9/s10;
% b = s11/s10;
% c = s21/s10;
% d = s13/s14;
% e = s15/s14;
% f = s22/s14;
% 
% s23 = one_e_10 * (e-b);
% s24 = one_e_10 * (f-c);
% g = s23/(a-d);
% h = s24/(a-d);
% 
% i = ((a * g) / one_e_10) + b;
% j = ((a * h) / one_e_10) + c;
% 
% k = s18 * one_e_10 + 2 * j * yki + 2 * h * xki;
% l = 2 * (g * xki + i * yki + zki * one_e_10);
% m = 4 * rik^2 * (g^2 + i^2 + one_e_10 * one_e_10) - l^2;
% 
% s26 = one_e_10 * xi - h;
% s27 = one_e_10 * yi - j;
% 
% n = 8 * rik^2 * (g * s26 + i * s27 + zi * one_e_10 * one_e_10) + 2 * l * k;
% o = 4 * rik^2 * (s26 * s26 + s27 * s27 + zi^2 * one_e_10 * one_e_10) - k^2;
% 
% %% Résolution de l'intersection des plans
% s28 = n / (2 * m);
% s29 = o/m;
% s30 = s28 * s28 - s29;
% root = sqrt(abs(s30));
% 
% z1 = s28 + root;
% z2 = s28 - root;
% 
% x1 = (g * z1 + h) / one_e_10;
% x2 = (g * z2 + h) / one_e_10;
% 
% y1 = (a * x1 + b * z1 + c) / one_e_10;
% y2 = (a * x2 + b * z2 + c) / one_e_10;
% 
% phy1 = atan2(y1, x1)
% theta1 = atan2(z1, x1)
% phy2 = atan2(y2, x2)
% theta2 = atan2(z2, x2)