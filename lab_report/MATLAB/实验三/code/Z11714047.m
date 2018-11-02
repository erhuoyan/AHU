% 4.1
a = [15 3 22;3 8 5;14 3 82;];
b = [1;5;6];
c = [12 18 5 2];
d = a(:, 3);
e = [b, d];
f = [b; d];
g = [c(:, 1:3); a];
h = [a(1,3), c(1,2), b(2,1)];

% 4.2
thermo_scores = [ 1 68 45 92; 2 83 54 93;
                  3 61 67 91; 4 70 66 92;
                  5 75 68 96; 6 82 67 90;
                  7 57 65 86; 8  5 69 89; 
                  9 76 62 97; 10 85 52 94; 
                  11 62 34 87;12 71 45 85;
                  13 96 56 45; 14 78 65 87; 
                  15 76 45 97; 16 68 76 96; 
                  17 72 65 89; 18 75 67 88; 
                  19 83 68 91; 20 93 90 92];
student_5 = thermo_scores(5, :);
test_1 = thermo_scores(:, 2);
std_test = [std(test_1), std(thermo_scores(:, 3)), std(thermo_scores(:, 4))];
var_test = [var(test_1), var(thermo_scores(:, 3)), var(thermo_scores(:, 4))];
scores_sum = sum(thermo_scores(:,2:4), 2);
scores_mean = mean(thermo_scores(:,2:4),2);
thermo_scores = [thermo_scores, scores_sum, scores_mean];
thermo_scores = sortrows(thermo_scores,-6);

% 4.3
times = 0:2:24;
thermocouple = [84.3 90.0 86.7; 86.4 89.5 87.6;
                85.2 88.6 88.3; 87.1 88.9 85.3;
                83.5 88.9 80.3; 84.8 90.4 82.4;
                85.0 89.3 83.4; 85.3 89.5 85.4;
                85.3 88.9 86.3; 85.2 89.1 85.3;
                82.3 89.5 89.0; 84.7 89.4 87.3;
                83.6 89.8 87.2];
thermocouple = [times' thermocouple];
[thermocouple_max, thermocouple_max_space] = max(thermocouple(:,2:4));
[thermocouple_min, thermocouple_min_space] = min(thermocouple(:,2:4));
times_max = times(thermocouple_max_space);
times_min = times(thermocouple_min_space);

% 4.4 
sensor = [ 0 70.6432 68.3470 72.3469 67.6751 73.1764;
           1 73.2823 65.7819 65.4822 71.8548 66.9929;
           2 64.1609 72.4888 70.1794 73.6414 72.7559;
           3 67.6970 77.4425 66.8623 80.5608 64.5008;
           4 68.6878 67.2676 72.6770 63.2135 70.4300;
           5 63.9342 65.7662  2.7644 64.8869 59.9772;
           6 63.4028 68.7683 68.9815 75.1892 67.5346;
           7 74.6561 73.3151 59.7284 68.0510 72.3102;
           8 70.0562 65.7290 70.6628 63.0937 68.3950;
           9 66.7743 63.9934 77.9647 71.5777 76.1828;
          10 74.0286 69.4007 75.0921 77.7662 66.8436;
          11 71.1581 69.6735 62.0980 73.5395 58.3739;
          12 65.0512 72.4265 69.6067 79.7869 63.8418;
          13 76.6979 67.0225 66.5917 72.5227 75.2782;
          14 71.4475 69.2517 64.8772 79.3226 69.4339;
          15 77.3946 67.8262 63.8282 68.3009 71.8961;
          16 75.6901 69.6033 71.4440 64.3011 74.7210;
          17 66.5793 77.6758 67.8535 68.9444 59.3979;
          18 63.5403 66.9676 70.2790 70.9512 66.7766;
          19 69.6354 63.2632 68.1606 64.4190 66.4785];
[sensor_times, sensor_nmu] = size(sensor);
sensor_nmu = sensor_nmu - 1;
[sensor_max,sensor_maxad] = max(sensor(:,2:6));
[sensor_min,sensor_minad] = min(sensor(:,2:6));
sensor_timesmax = sensor(sensor_maxad,1)';
sensor_timesmin = sensor(sensor_minad,1)';
sensor_mean = mean(sensor(:,2:6));
sensor_std = std(sensor(:,2:6));

% 4.6
kPa = [0:100]';
P = 1000 .* kPa;
midu_1 = 13560;
midu_2 = 1000;
g = 9.81;
h = [P ./(midu_1*g)' P./(midu_2*g)]; 

% 4.9
magic_4_9 = magic(6);
% (a)
magic_x_sum = sum(magic_4_9,2);
%(b)
magic_y_sum = sum(magic_4_9);
%(c)
magic_xy_sum = sum(diag(magic_4_9));


% 5.1
x = 0:10;
% a
y1 = exp(x);
figure('name','5.1a')
plot(x,y1)
title('y = e^x')
xlabel('x')
ylabel('y')
grid 
% b
y2 = sin(x);
figure('name','5.1b')
plot(x,y2)
title('sin(x)')
xlabel('x')
ylabel('y')
grid 
% c
a = 5;
b = 2;
c = 4;
y3 = a.*x.^2+b.*x+c;
figure('name','5.1c')
plot(x,y3)
title('a*x^2+b*x+c')
xlabel('x')
ylabel('y')
grid  
% d
y4 = x.^(1/2);
figure('name','5.1d')
plot(x,y4)
title('y = sqrt(x)')
xlabel('x')
ylabel('y')
grid

% 5.2
y = [12, 4, 12, 22, 8, 9];
figure('name','5.2')
plot(y)

% 5.3
x = -pi:pi/100:pi;
y1 = sin(x);
y2 = sin(2*x);
y3 = sin(3*x);
figure('name','5.3');
plot(x,y1, x,y2, x,y3);

% 5.4
figure('name','5.4')
plot(x,y1,'--r', x,y2,'-b', x,y3,':g');

% 5.5
figure('name','5.5');
plot(x,y1,'--r', x,y2,'-b', x,y3,':g');
xlim([-6,6,]);
legend('sinx', 'sin2x', 'sin3x')
title('graph for Chapter5.5')

% 5.10
V = 100;
g = 9.8;
theta = [pi/2 pi/4 pi/6];
t = 0:0.01:20;
[m n] = meshgrid(theta, t);
h = n*V.*cos(m);
v = n*V.*sin(m)-(1/2)*g.*n.^2;
figure('name', '5.10')
plot(h,v)

% 5.12
x = 0:10;
y1 = exp(x);
y2 = sin(x);
y3 = a.*x.^2+b.*x+c;
y4 = x.^(1/2);
figure('name' , '5.12')
subplot(2,2,1)
plot(x,y1)
title('y = exp(x)')
subplot(2, 2, 2)
plot(x, y2)
title('y = sin(x)')
subplot(2,2,3)
plot(x,y3)
title('y = a.*x.^2+b.*x+c')
subplot(2,2,4)
plot(x, y4)
title('y = x.^(1/2)')

% 5.14
theta = 0:2*pi;
r1 = sin(theta).^2+cos(theta).^2;
r2 = sin(theta);
r3 = exp(theta./5);
r4 = sinh(theta);
figure('name', '5.14')
subplot(2,2,1)
polar(theta, r1)
subplot(2,2,2)
polar(theta, r2)
subplot(2,2,3)
polar(theta, r3)
subplot(2,2,4)
polar(theta, r4)

% 5.17
% a
t = 0:2:45;
d = 30*(2.^(t/2));
ans5_17a = [t', d'];
% b
figure('name', '5.17')
subplot(2,2,1)
plot(t, d)
title('x-y线?直角坐标')
subplot(2,2,2)
semilogx(t, d)
title('x轴对数坐标系')
subplot(2,2,3)
semilogy(t, d)
title('y轴对数坐标系')
subplot(2,2,4)
loglog(t, d)
title('双对数坐标系')

% 5.18
t = [1971 1972 1974 1979 1982 1985 1989 1993 1996 1997 1997 1999 1999 1999 2000 2003 2003 2003 2004 2006 2006 2006 2006 2007 2006 2008];
d = [2300 2500 4500 29000 134000 275000 1200000 3100000 4300000 7500000 8800000 9500000 21300000 22000000 42000000 54300000 105900000 220000000 592000000 241000000 291000000 582000000 681000000 789000000 17000000000 2000000000];
figure
semilogy(t,d,'-o');

% 5.19
Q = 1000;
k0 = 10;
R= 8.314;
T = 300:1000;
k = k0 .* exp(-Q./(R.*T));
figure
subplot(2,1,1)
plot(T, k)
subplot(2,1,2)
semilogy(1./T, k)

% 5.20
G = [68 83 61 70 75 82 57 5 76 85 62 71 96 78 76 68 72 75 83 93];
figure
bar(G)
figure
hist(G)

% 5.21
grades=[2, 4, 8, 4, 2];
figure
pie(grades,{'A','B','C','D','E'})
figure
pie3(grades)

% 5.23
num = randn(1, 1000)*3.5 + 70;
figure
hist(num)

% 5.27
x = 0:pi/100:20*pi;
y = x.*sin(x);
z = x.*cos(x);
figure
plot(x,y)
figure
polar(x,y)
figure
plot3(x,y,z)
grid
title('5.27'), xlabel('angle'),ylabel('xsin(x)'),zlabel('xcos(x)')

% 5.29
x = -5:0.5:5;
y = -5:0.5:5;
[X, Y] = meshgrid(x,y);
figure
Z = sin(sqrt(X.^2 + Y.^2));
mesh(Z)
figure
subplot(2,2,1)
surf(Z)
title('surf(Z)')
subplot(2,2,2)
surf(X,Y,Z)
title('surf(X,Y,Z)')
subplot(2,2,3)
surf(Z)
shading interp
title('Contour Plot surf(Z)')
subplot(2,2,4)
surf(X,Y,Z)
shading interp
title('Contour Plot surf(X,Y,Z)')
figure
subplot(1,2,1)
surf(Z)
colormap(autumn)
shading interp
title('Contour Plot surf(Z)')
subplot(1,2,2)
surf(X,Y,Z)
shading interp
title('Contour Plot surf(X,Y,Z)')
figure
subplot(1,2,1)
contour(Z)
title('Contour Plot')
subplot(1,2,2)
surfc(Z)
title('Comiation Surfance and Contour Plot')



