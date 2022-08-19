% Position des hydros 2022-07-05
HRef = [0 0 0];
H1 = [-6.77 -12.86 -4] ./1000;
H2 = [-14.5 0 -4] ./1000;
H3 = [-6.77 12.86 -4] ./1000;
HydroPosition = [(H1-HRef); (H2-HRef); (H3-HRef)];

d1 = norm(H1);
d3 = norm(H3);

% Configuration Sinus pour des tests
c = 1484; % m/s
Fc = 30000; % hz
PhaseShift = sinusDistance(3, 1, 1, Fc)
