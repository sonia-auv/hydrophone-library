function [returnAngle] = unWrapPhase(angle1, angle2)

    returnAngle = angle1 - angle2;

    while(returnAngle < - pi)
        returnAngle = returnAngle + 2 * pi;
    end
    while(returnAngle > pi)
        returnAngle = returnAngle - 2 * pi;
    end

end