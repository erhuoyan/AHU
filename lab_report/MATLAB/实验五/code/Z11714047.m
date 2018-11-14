% 7.1
x = input(' Enter a value ; ');
y = sin(x);
disp('x = ')
disp(x)
disp('sin(x) = ')
disp(y)

% 7.2
x = input(' Enter a values for x in brackets = ');
y = max(x);
disp('x = ')
disp(x);
disp(' The maxinum is :')
disp(y)

%  7.3
s = input('Enter the base area : ');
h = input('Enter the high : ');
V = (1/3)*s*h;
disp('s = ')
disp(s)
disp('h = ')
disp(h)
disp('The volume of cone is ')
disp(V)

% 7.9
x = 1:13;
y = x.*6;
table = [x; y];
fprintf('%d times 6 is %d\n',table)

% 7.10
angle = 0:pi/10:2*pi;
sines = sin(angle);
mathtable = [angle;sines];
disp('Table for sinusoidal mathematics')
disp('    angle       sines')
fprintf('%8.2f    %8.2f\n',mathtable)

% 7.12
% (a)
yen = 5:5:125;
dollar = 0.008786.*yen;
money_table1 = [yen;dollar];
disp('    JRE To USD')
disp('    JPY    USD')
fprintf('%8.2f %8.2f \n',money_table1)
%(b)
EUR = 1:2:59;
USD = 1.1334.*EUR;
money_table2 = [EUR;USD];
disp('    EUR To USD')
disp('    EUR     USD')
fprintf('%8.2f %8.2f \n',money_table2)
%(c)
USD = 1:10;
EUR = 0.8823.*USD;
GBP = 0.7707.*USD;
JPY = 113.82.*USD;
money_table3 = [USD;EUR;GBP;JPY];
disp('    Exchange rate conversion table')
disp('    USD      EUR      GBP    JPY')
fprintf('%8.2f %8.2f %8.2f %8.2f \n',money_table3)

% 7.13
% (a)
incr = input('What temperature increments would you like calculated? ');
t_F = 0:incr:200;
t_K = (5/9).*(459.67 + t_F);
t1 = [t_F;t_K];
disp('温度转换表:华氏温度 to 开氏温度')
disp('华氏温度   开氏温度')
fprintf('%8.2f %8.2f \n', t1)
%(b)
temp_begin = input('Enter the Starting temperature: ');
incr = input('What temperature increments would you like calculated? ');
t_C = temp_begin:incr:24*incr+temp_begin;
t_R = (9/5)*t_C + 32 + 459.67;
t2 = [t_C;t_R];
disp('温度转换表:摄氏温度 to 兰金温度')
disp('摄氏温度   兰金温度')
fprintf('%8.2f %8.2f \n', t2)
%(c)
temp_begin = input('Enter the Starting temperature: ');
incr = input('What temperature increments would you like calculated? ');
line  = input ('Enter the Line number');
t_C = temp_begin:incr:(line-1)*incr+temp_begin;
t_F = (5/9).*t_C + 32;
t3 = [t_C;t_F];
disp('温度转换表:摄氏温度 to 华氏温度')
disp('摄氏温度   华氏温度')
fprintf('%8.2f %8.2f \n', t3)

% 7.16
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
