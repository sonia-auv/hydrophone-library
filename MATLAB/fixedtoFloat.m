function [data] = fixedtoFloat(value)

nbFractionBits = 19;
sign = bitshift(value, -30);

if sign
    newvalue = bitand(bitcmp(value), 2147483647); % Masque pour 30 bits
    data = -1 * (newvalue / bitshift(1,nbFractionBits));
else
    data = value /  bitshift(1, nbFractionBits);
end
end