clear

%% Convert Int to Signed for algo

X = sqrt(2)/2;
Entraxe = 0.015;
DiffZ = 0.013;

Xn = [75093130; 168698572; 105951006;
    2009980856; 1985416442; 14137662;
    200684806; 119919716; 2117874810;
    1986924942; 2129454056];

Yn = [5195274; 26115152; 47807382;
    45822196; 20533702; 112588406;
    2114109594; 22687840; 69155674;
    114917530; 2044133296];

Zn = [179394120; 294336324; 136731402;
    1938177380; 2007197840; 2054635868;
    248847804; 10170918; 142973766;
    1944990812; 2013627278];

save out_data Xn Yn Zn

M = size(Xn);

for i = 1:M(1)
   i
   x = fixedtoFloat(Xn(i))
   y = fixedtoFloat(Yn(i))
   z = fixedtoFloat(Zn(i))
   heading = atan2(y,x)
   elevation = acos(z / sqrt(x^2+y^2+z^2))
end

K = [x; y; z];

HRef = [X*Entraxe 0 0];
H1 = [0 -X*Entraxe 0];
H2 = [-X*Entraxe 0 DiffZ];
H3 = [0 X*Entraxe 0];

HydroPosition = [(H1-HRef); (H2-HRef); (H3-HRef)];

PhaseShift = HydroPosition * K