m = 0:pi/100:2*pi;
x = sin(m);
y = cos(m);
plot(x,y)
hold on
axis([-1, 1, -1,1])
[a1, b1] = ginput(1);
[a2, b2] = ginput(1);
c = [a1 a2];
d = [b1 b2];
plot(c, d)
z = sqrt((a1 - a2)^2 + (b1 - b2)^2);
disp ('z = ')
disp(z)