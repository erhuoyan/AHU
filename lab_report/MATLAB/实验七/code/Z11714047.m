 % 9.2
density = [1.2, 7.8, 2.7];
volume = [700, 200, 300];
mass = dot(density, volume);
fprintf('总质量为%d。\n',mass)

% 9.3
goods_sum = [2, 1, 2, 5, 1];
price_per = [3.5, 1.25, 4.25, 1.55, 3.15];
price_sum = dot(goods_sum, price_per);
fprintf('总账单为%f。\n',price_sum)

% 9.4
mass = [250, 100, 10];
C = [0.45, 4.2, 0.9];
CP = dot(mass, C);
fprintf('弹式量热器的总热容为%d。 \n',CP)

% 9.7
A1 = [12 4;3 -5];
B1 = [2 12;0 0];
A2 = [1 3 5;2 4 6];
B2 = [-2 4;3 8;12 -2];
disp('(a)中A*8等于：')
disp(A1*B1)
disp('(a)中B*A等于：')
disp(B1*A1)
disp('(b)中A*8等于：')
disp(A2*B2)
disp('(b)中B*A等于：')
disp(B2*A2)

% 9.8
price_per = [3.5, 1.25, 4.25, 1.55, 3.15];
goods_sum = [2 1 2 5 1;3 2 1 4 3]';
price_sum = price_per*goods_sum;
fprintf('Ann 的话费为%g。\nFred 的花费为%g。\n',price_sum);

% 9.14
A = [2 -1;4 5];
B = [4 2;2 1];
C = [2 0 0;1 2 2;5 -4 0];
if (det(A) == 0 )
    disp('A不存在逆矩阵')
else
    disp('A存在逆矩阵：')
    disp(inv(A))
end
if (det(B) == 0 )
    disp('B不存在逆矩阵')
else
    disp('B存在逆矩阵：')
    disp(inv(B))
end
if (det(C) == 0 )
    disp('C不存在逆矩阵')
else
    disp('C存在逆矩阵：')
    disp(inv(C))
end

% 9.18
% (a)
% 逆矩阵法
A = [-2 1;1 1];
B = [3;10];
X = inv(A)*B;
disp('( a )')
disp('逆矩阵法求得线性方程组的解为：')
disp(X)
% 左除法
A = [-2 1;1 1];
B = [3;10];
X = A\B;
disp('左除法求得线性方程组的解为：')
disp(X)

% (b)
% 逆矩阵法
A = [5 3 -1;3 2 1; 4 -1 3];
B = [10;4;12];
X = inv(A)*B;
disp('( b )')
disp('逆矩阵法求得线性方程组的解为：')
disp(X)
% 左除法
A = [5 3 -1;3 2 1; 4 -1 3];
B = [10;4;12];
X = A\B;
disp('左除法求得线性方程组的解为：')
disp(X)

% (c)
% 逆矩阵法
A = [3 1 1 1;1 -3 7 1;2 2 -3 4; 1 1 1 1];
B = [24;12;17;0];
X = inv(A)*B;
disp('( c )')
disp('逆矩阵法求得线性方程组的解为：')
disp(X)
% 左除法
A = [3 1 1 1;1 -3 7 1;2 2 -3 4; 1 1 1 1];
B = [24;12;17;0];
X = A\B;
disp('左除法求得线性方程组的解为：')
disp(X)

% 9.19
clear,clc
clear
A = [3  4 2 -1 1  7 1;2 -2  3 -4  5  2 8; 1 2 3 1  2 4 6;
     5 10 4  3 9 -2 1;3  2 -2 -4 -5 -6 7;-2 9 1 3 -3 5 1;
     1 -2 -8 4 2 4 5];
B = [42;32;12;-5;10;18;17];
tic
X = inv(A)*B;
toc
tic
X = A\B;
toc
