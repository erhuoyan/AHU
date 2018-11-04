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

% 6.5
MV = [78.115 46.07 102.3];
n = 1:10;
[x,y] = meshgrid(n,MV);
m = mass(x',y');

% 6.6
r = 1609.44.*[7926 4217];
h = 0.3048.*[0:1000:10000];
[x,y] = meshgrid(r,h);
d = distance(x',y');
 
% 6.7
t = 0:0.5:30;
h = height(t);
figure
plot(t,h)
title('The Path of Rocket')
xlabel('time')
ylabel('height')

% 6.9
figure
n = input('pleast input n: ');
polygon(n)

% 6.10
% (a)
T_F = 0:200;
T_k = F_to_K(T_F);
T = [T_F',T_K'];
% (b)

