% 6.1
n = 10 : 100;
N = num_grains(n);
figure
plot(n, N)
title('ASTM Grain number')
xlabel('ASTM Grain Size')
ylabel('Number of grains')
grid

% 6.2
m = logspace(0, 6);
E = energy(m);
figure
subplot(2,2,1)
semilogy(m,E)
title('semilogy')
subplot(2,2,2)
semilogx(m,E)
title('semilogx')
subplot(2,2,3)
loglog(m,E)
title('loglog')


% 6.4
MV = [78.115 46.07 102.3];
m = 1:10;
[x,y] = meshgrid(m,MV);
n = nmoles(x',y');
disp(n)

% 6.5
MV = [78.115 46.07 102.3];
n = 1:10;
[x,y] = meshgrid(n,MV);
m = mass(x',y');
disp(m)

% 6.6
r = 1609.44.*[7926 4217];
h = 0.3048.*(0:1000:10000);
[x,y] = meshgrid(r,h);
d = distance(x',y');
disp(d)

% 6.7
t = 0:0.5:30;
h = height(t);
figure
plot(t,h)
title('The Path of Rocket')
xlabel('time')
ylabel('height')
[h_max,h_max_space] = max(h);
h_max_time = t(h_max_space);
disp(h_max_time)

% 6.9
figure
n = input('pleast input n: ');
polygon(n)

% 6.10
addpath ('my_temp_conversion')
% (a)
t_F = 0:10:200;
t_K = F_to_K(t_F);
t1 = [t_F',t_K'];
disp('F_to_K')
disp(t1)
% (b)
t_C = linspace(0,100,25);
t_R = C_to_R(t_C);
t2 = [t_C', t_R'];
disp('C_to_R')
disp(t2)
% (c)
t_C = 0:5:100;
t_F = C_to_F(t_C);
t3 = [t_C',t_F'];
disp('C_to_F')
disp(t3)

% 6.11
midu = 13560;
g = 9.8;
% (a)
P = @(x) midu*g.*x;
% (b)
Pa_to_atm = @(x) 101325.*P(x);
% (c)
h = 0.5:0.1:1.0;
p = P(h);
patm = Pa_to_atm(h);
disp('Pa：')
disp(p)
disp('atm：')
disp(patm)

% (d)
save my_p_function1 P
save my_p_function2 Pa_to_atm

% 6.13
% (a)
my_function = @(x) -x^2-5*x-3+exp(x);
% (b)
figure
fplot(my_function, [-5, 5])
grid
% (c)
disp('函数最小值')
f_min = fminbnd(my_function, -5, 5);
disp(f_min)

% 6.14
% (a)
height_handle = @(x) height(x);
% (b)
figure
fplot(height_handle, [0, 60])
grid
% (c)
disp('火箭返回地面所用时间')
time_zero = fzero(height_handle,30);
disp(time_zero)
% 6.15
temperature_conversions