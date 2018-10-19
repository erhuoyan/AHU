% 2.1 

 ans2_1_1= 1+3/4;
ans2_1_2= 5*6*4/2;
ans2_1_3= 5/2*6*4;
ans2_1_4= 5^2*3;
ans2_1_5= 5^(2*3);
ans2_1_6= 1 + 3 + 5/5 +3 +1;
ans2_1_7= (1 + 3 + 5)*(5 + 3 + 1);
ans2_1 = [ans2_1_1, ans2_1_2, ans2_1_3, ans2_1_4, ans2_1_5, ans2_1_6, ans2_1_7]

 % 2.2

isvarname fred;
isvarname fred!;
isvarname book_1;
isvarname book-1;
isvarname 2ndplac;
isvarname Second_Place;
isvarname '#1';
isvarname No_1;
isvarname vel_5;
isvarname vel.5;
isvarname tan;
isvarname while;

 % 2.3

 ans2_3_1 = 5^2;
ans2_3_2 = (5+3)/(5.*6);
ans2_3_3 = (4 + 6^3)^(1/2);
ans2_3_4 = (9 + 6/12)+7.*5^(3+2);
ans2_3_5 = 1 + 5.*3/6^2 + 2^(2-4).*1/5.5;
ans2_2 = [ans2_3_1, ans2_3_2, ans2_3_3, ans2_3_4, ans2_3_5]

 % 2.4 (a)
r1 =  5;
s1 = pi * r1^2;
% 2.4 (b) 
r2 = 10;
s2 = 4*pi*r2^2;
% 2.4 (c)
r3 = 2;
s3 = 4/3*pi*r3^3;
ans2_4 = [s1,s2,s3]

 % 2.7
P = 220;
n = 2;
V = 1;
a = 5.536;
b = 0.03049;
R = 0.08314472;
T1 = P*V/(n*R);
T2 = (P+n^2*a/V^2)*(V-n*b)/(n*R);


 % 2.11 (a)
ft = 0 : 1 : 10;
m = 0.3048 * ft;
ans2_11a=[ft', m']
% 2.11 (b)
radians = 0 : 0.1*pi : pi;
degrees = 180/pi*radians;
ans2_11b = [radians', degrees']
% 2.11 (c)
mih = linspace(0, 100, 15);
fts = 0.6818.*mih;
ans2_11c=[mih, fts]
% 2.11 (d)
H_conc = linspace(0.001, 0.1, 10);
PH = -log10(H_conc);
ans2_11d = [H_conc', PH']

% 2.15 (a)
n = 2;
V = 11;
a = 5.536;
b = 0.03049;
R = 0.08314472;
P = linspace(0, 400, 10);
T11 = P*V/(n*R);
T22 = (P+n^2*a/V^2)*(V-n*b)/(n*R);
ans2_15a= T22
% 2.15 (b)
n = 2;
V = linspace(0.11, 101, 10);
a = 5.536;
b = 0.03049;
R = 0.08314472;
P = 220;
T111 = P*V/(n*R);
T222 = (P+n^2*a./V.^2).*(V-n*b)/(n*R);
ans2_15b= T222
 
% 2.16
a = [-1/3, 0, 1/3, 2/3];
format short
format long
format bank
format short e
format long e
format short eng
format long eng
format short g
format long g
format +
format rat

format short


% 2.17 (a)
radians = 0 : 0.1*pi : pi;
degrees = radians * 180/pi;
ans2_17 = [degrees', radians']
% 2.17 (b)
save degrees.dat -ascii ans2_17;
% 2.17 (c)
clear
load degrees.dat

% 3.1
a1 = nthroot (-5, 3);
a2 = (-5)^(1/3);
a3 = a1^3;
a4 = a2^3;
ans3_1 = [a1 a2 a3 a4]

% 3.2
b = 1:1:10;
logb10 = log(10)./log(b);
ans3_2=logb10

% 3.4
Q = 8000;
R = 1.987;
k0 = 1200;
T = 100:50:500;
k = k0*exp(-Q./(R.*T));
ans3_4 = [T', k']

% 3. 8
ans3_8 = factorial(52)/(factorial(52-5)*factorial(5))

% 3.9
ans3_9 = length(primes(20000))-length(primes(10000))

% 3.10
rad = [0:0.1:2*pi];
deg =rad*180/pi; 
ans3_10 = [deg', sin(rad)', cos(rad)', tan(rad)']

% 3.13
d = 120;
hmax = d*tand(33);
hmin = d*tand(27);
ans3_13 = [hmax, hmin]

% 3.14(a)
h=200;
d=20;
ans3_14a = atan(h/d)*180/pi
% 3.14(b)
ans3_14b = sqrt(d^2+h^2)

% 3.15(a)
R = [84.3 86.4 85.2 87.1 83.5 84.8 85.0 85.3 85.3 85.2 82.3 84.7 83.6;
      90.0 89.5 88.6 88.9 88.9 90.4 89.3 89.5 88.9 89.1 89.5 89.4 89.8; 
      86.7 87.6 88.3 85.3 80.3 82.4 83.4 85.4 86.3 85.3 89.0 87.3 87.2]';
ans3_15a = max(R)
% 3.15(b)
ans3_15b = min(R)

% 3.17
G = [68, 83, 61, 70, 75, 82, 57, 5, 76, 85, 62, 71, 96, 78, 76, 68, 72, 75, 83, 93];
ans3_17=[mean(G), median(G), mode(G), std(G)]
G1=sort(G);

%3 .18
X = randn(1,10000)*23.5 + 80 ;
ans3_18=[mean(X),std(X)]  

% 3.20(a)
ans3_20a = ceil(rand(1)*6)
% 3.20(b)
ans3_20b = ceil(rand(1,2)*6)