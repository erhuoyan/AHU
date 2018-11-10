angle = 0:pi/10:2*pi;
sines = sin(angle);
mathtable = [angle;sines];
disp('Table for sinusoidal mathematics')
disp('    angle       sines')
fprintf('%8.2f    %8.2f\n',mathtable)