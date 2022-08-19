function [heading1, elevation1, heading2, elevation2] = computeHyperPlans(phaseRef, phase1, phase2, phase3, frequency, c)

%% Constantes
cte = 2 * pi;
one_e_10 = 1e10;

%% Position des hydros
HRef = [0 0 0];
H1 = [-6.77 -12.86 -4] ./1000;
H2 = [-14.5 0 -4] ./1000;
H3 = [-6.77 12.86 -4] ./1000;

xi = HRef(1);
yi = HRef(2);
zi = HRef(3);

xj = H1(1);
yj = H1(2);
zj = H1(3);

xk = H2(1);
yk = H2(2);
zk = H2(3);

xl = H3(1);
yl = H3(2);
zl = H3(3);

%% Preprocessing phase to time difference
phase = [phaseRef, phase1, phase2, phase3];
lowest = 0;
%[lowest,] = min(phase);
timeDiff = (phase + abs(lowest)) / (cte * frequency);

ti = timeDiff(1); % Supposition puisqu'on a uniquement les différences de phase
tj = timeDiff(2); % H1 => (h1 - href) si href = 0 
tk = timeDiff(3); % H2
tl = timeDiff(4); % H3

%% Différence de positions
xji = xj-xi;
xki = xk-xi;
xlk = xl-xk;
xjk = xj-xk;

yji = yj-yi;
yki = yk-yi;
ylk = yl-yk;
yjk = yj-yk;

zji = zj-zi;
zki = zk-zi;
zlk = zl-zk;
zjk = zj-zk;

%% Calcul distance selon les différences d'arrivée
rij = abs(c*(ti-tj));
rkj = abs(c*(tk-tj));
rik = abs(c*(ti-tk));
rkl = abs(c*(tk-tl));

%% Calcul des polynomiaux
s9 = one_e_10 * (rik * xji - rij * xki);
s10 = rij * yki - rik * yji;
s11 = one_e_10 * (rik * zji - rij * zki);
s13 = one_e_10 *(rkl * xjk - rkj * xlk);
s14 = rkj * ylk - rkl * yjk;
s15 = one_e_10 * (rkl * zjk - rkj * zlk);

s17 = rij^2 + xi^2 - xj^2 + yi^2 - yj^2 + zi^2 - zj^2;
s18 = rik^2 + xi^2 - xk^2 + yi^2 - yk^2 + zi^2 - zk^2;
s19 = rkj^2 + xk^2 - xj^2 + yk^2 - yj^2 + zk^2 - zj^2;
s20 = rkl^2 + xk^2 - xl^2 + yk^2 - yl^2 + zk^2 - zl^2;

s12 = one_e_10 * (rik * s17 - rij * s18);
s16 = one_e_10 * (rkl * s19 - rkj * s20);
s21 = s12 / 2;
s22 = s16 / 2;
%% Calcul des plans hyperboliques
a = s9/s10;
b = s11/s10;
c = s21/s10;
d = s13/s14;
e = s15/s14;
f = s22/s14;

s23 = one_e_10 * (e-b);
s24 = one_e_10 * (f-c);
g = s23/(a-d);
h = s24/(a-d);

i = ((a * g) / one_e_10) + b;
j = ((a * h) / one_e_10) + c;

k = s18 * one_e_10 + 2 * j * yki + 2 * h * xki;
l = 2 * (g * xki + i * yki + zki * one_e_10);
m = 4 * rik^2 * (g^2 + i^2 + one_e_10 * one_e_10) - l^2;

s26 = one_e_10 * xi - h;
s27 = one_e_10 * yi - j;

n = 8 * rik^2 * (g * s26 + i * s27 + zi * one_e_10 * one_e_10) + 2 * l * k;
o = 4 * rik^2 * (s26 * s26 + s27 * s27 + zi^2 * one_e_10 * one_e_10) - k^2;

%% Résolution de l'intersection des plans
s28 = n / (2 * m);
s29 = o/m;
s30 = s28 * s28 - s29;
root = sqrt((s30));

z1 = s28 + root;
z2 = s28 - root;

x1 = (g * z1 + h) / one_e_10;
x2 = (g * z2 + h) / one_e_10;

y1 = (a * x1 + b * z1 + c) / one_e_10;
y2 = (a * x2 + b * z2 + c) / one_e_10;

heading1 = atan2(real(y1), real(x1));
elevation1 = atan2(real(z1), real(x1));
heading2 = atan2(real(y2), real(x2));
elevation2 = atan2(real(z2), real(x2));
end