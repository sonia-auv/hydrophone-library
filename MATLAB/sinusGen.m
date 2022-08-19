function [phaseShitf] = sinusGen(theta, phy, f)
%% Calcul phase différence
c = 1484; %Speed of sound
cte = (2*pi*f)/c;

% Rads to degree
theta = 2*pi*theta/360;
phy = 2*pi*phy/360;

HRef = [0 0 0];
H1 = [-6.77 -12.86 -4] ./1000;
H2 = [-14.5 0 -4] ./1000;
H3 = [-6.77 12.86 -4] ./1000;
HydroPosition = [(H1-HRef); (H2-HRef); (H3-HRef)]

%Déplacement de la source au hydro Ref
kx = cte * sin(theta) * cos(phy);
ky = cte * sin(theta) * sin(phy);
kz = cte * cos(theta);

K = [kx; ky; kz]

% Eref = norm(V);
% EH1 = norm(V+HydroPosition(1,:));
% EH2 = norm(V+HydroPosition(2,:));
% EH3 = norm(V+HydroPosition(3,:));

phaseShitf = HydroPosition * K;

% timeDiff = [EH1-Eref EH2-Eref EH3-Eref] ./c;
% phaseShitf = timeDiff .* (2*pi*f);
end