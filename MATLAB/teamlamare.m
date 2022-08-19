%% Clear statements
clear all; % clear the workspace
close all; % close figures
clc; % clear the command window
%% Pinger Placement with respect to Hydrophone A
%
%           A(origin)
%           | theta
% C |--->
%           |
%           B
pingerAngle = 300;
pingerDist = 33;
%% Delay calculations
%Temp section until real delays can be measured/simulated
Ax = 0;
Ay = 0;
Bx = 0;
By = -1;
Cx = -cosd(30);
Cy = -.5;
Pingx = pingerDist * cosd(pingerAngle - 90);
Pingy = pingerDist * sind(pingerAngle - 90);
Adist = pingerDist;
Bdist = sqrt((Bx - Pingx)^2 + (By - Pingy)^2);
Cdist = sqrt((Cx - Pingx)^2 + (Cy - Pingy)^2);
AB = Bdist - Adist;
AC = Cdist - Adist;
%% AB plot
j = 1;
for i = .01:.01:50
 q(j) = i;
 r(j) = i + AB;

 ABangle(j) = real(180/pi*acos((q(j)^2+1-(r(j)^2))/(2*q(j))));
 %make acos work
 if pingerAngle > 180
 ABangle(j) = 360 - ABangle(j);
 end
 j = j + 1;
end
% Polar -> Cartesian
%For different quadrant
for i = 1:1:length(q)
 ABx(i) = q(i) * cosd( ABangle(i));
 ABy(i) = q(i) * sind( ABangle(i));
end

%% AC plot
j = 1;
for i = .01:.01:50
 q(j) = i;
 r(j) = i + AC;

 ACangle(j) = real(180/pi*acos((q(j)^2+1-(r(j)^2))/(2*q(j))));
 %make acos work
 %need to change if statement: no relation to pingerAngle
 if pingerAngle > 120 && pingerAngle < 300
 ACangle(j) = 360 - ACangle(j);
 end
 j = j + 1;
end
%Polar -> Cartesian
%For different quadrant
for i = 1:1:length(q)
 ACx(i) = q(i) * cosd( ACangle(i));
 ACy(i) = q(i) * sind( ACangle(i));
end

ACRotated = [ACx; ACy];
ACRotated = [cosd(-60), -sind(-60);sind(-60), cosd(-60)] * ACRotated;
ACx = ACRotated(1,:);
ACy = ACRotated(2,:);
%% plot
figure(2)
plot(ABx,ABy, 'r',ACx,ACy, 'g')
hold
plot(0,0,'d','LineWidth',2,'MarkerEdgeColor','k','MarkerFaceColor','g','MarkerSize',5)
plot(Bx,By,'d','LineWidth',2,'MarkerEdgeColor','k','MarkerFaceColor','g','MarkerSize',5)
plot(Cx,Cy,'d','LineWidth',2,'MarkerEdgeColor','k','MarkerFaceColor','g','MarkerSize',5)
hold
axis equal