function [bool] = max180deg(angle1, angle2, angle3, angle4, max180)
    if max180
        if abs(angle2-angle1) > pi
            bool = false;
        elseif abs(angle3-angle1) > pi
            bool = false;
        elseif abs(angle4-angle1) > pi
            bool = false;
        else
            bool = true;
        end
    else
        bool = true;
    end
end