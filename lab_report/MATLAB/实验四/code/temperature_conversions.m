function [] = temperature_conversions

% Problem (a)
t_F = 0:10:200;
disp('F_to_K')
t_K = F_to_K(t_F);
t1 = [t_F',t_K'];
disp(t1)

% Problem (b)
t_C = linspace(0,100,25);
disp('C_to_R')
t_R = C_to_R(t_C);
t2 = [t_C', t_R'];
disp(t2)

% Problem (c)
t_C = 0:5:100;
disp('C_to_F')
t_F = C_to_F(t_C);
t3 = [t_C',t_F'];
disp(t3)

function result = F_to_K(x)
result = (5/9).*(x+459.67); 

function result = C_to_R(x)
result = (9/5)*x + 32 + 459.67;

function result = C_to_F(x)
result = (9/5)*x + 32;
