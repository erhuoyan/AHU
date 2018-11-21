 % 9.2
density = [1.2, 7.8, 2.7];
volume = [700, 200, 300];
mass = dot(density, volume);
fprintf('������Ϊ%d��\n',mass)

% 9.3
goods_sum = [2, 1, 2, 5, 1];
price_per = [3.5, 1.25, 4.25, 1.55, 3.15];
price_sum = dot(goods_sum, price_per);
fprintf('���˵�Ϊ%f��\n',price_sum)

% 9.4
mass = [250, 100, 10];
C = [0.45, 4.2, 0.9];
CP = dot(mass, C);
fprintf('��ʽ��������������Ϊ%d�� \n',CP)

% 9.7
A1 = [12 4;3 -5];
B1 = [2 12;0 0];
A2 = [1 3 5;2 4 6];
B2 = [-2 4;3 8;12 -2];
disp('(a)��A*8���ڣ�')
disp(A1*B1)
disp('(a)��B*A���ڣ�')
disp(B1*A1)
disp('(b)��A*8���ڣ�')
disp(A2*B2)
disp('(b)��B*A���ڣ�')
disp(B2*A2)

% 9.8
price_per = [3.5, 1.25, 4.25, 1.55, 3.15];
goods_sum = [2 1 2 5 1;3 2 1 4 3]';
price_sum = price_per*goods_sum;
fprintf('Ann �Ļ���Ϊ%g��\nFred �Ļ���Ϊ%g��\n',price_sum);

% 9.14
A = [2 -1;4 5];
B = [4 2;2 1];
C = [2 0 0;1 2 2;5 -4 0];
if (det(A) == 0 )
    disp('A�����������')
else
    disp('A���������')
    disp(inv(A))
end
if (det(B) == 0 )
    disp('B�����������')
else
    disp('B���������')
    disp(inv(B))
end
if (det(C) == 0 )
    disp('C�����������')
else
    disp('C���������')
    disp(inv(C))
end

% 9.18
% (a)
% �����
A = [-2 1;1 1];
B = [3;10];
X = inv(A)*B;
disp('( a )')
disp('�����������Է�����Ľ�Ϊ��')
disp(X)
% �����
A = [-2 1;1 1];
B = [3;10];
X = A\B;
disp('�����������Է�����Ľ�Ϊ��')
disp(X)

% (b)
% �����
A = [5 3 -1;3 2 1; 4 -1 3];
B = [10;4;12];
X = inv(A)*B;
disp('( b )')
disp('�����������Է�����Ľ�Ϊ��')
disp(X)
% �����
A = [5 3 -1;3 2 1; 4 -1 3];
B = [10;4;12];
X = A\B;
disp('�����������Է�����Ľ�Ϊ��')
disp(X)

% (c)
% �����
A = [3 1 1 1;1 -3 7 1;2 2 -3 4; 1 1 1 1];
B = [24;12;17;0];
X = inv(A)*B;
disp('( c )')
disp('�����������Է�����Ľ�Ϊ��')
disp(X)
% �����
A = [3 1 1 1;1 -3 7 1;2 2 -3 4; 1 1 1 1];
B = [24;12;17;0];
X = A\B;
disp('�����������Է�����Ľ�Ϊ��')
disp(X)

% 9.19
clear,clc
clear
A = [3 4 2 -1 1 7 1;2 -2 3 -4 5 2 8;1 2 3 1 2 4 6;5 10 4 3 9 -2 1;3 2 -2 -4 -5 -6 7;-2 9 1 3 -3 5 1;1 -2 -8 4 2 4 5];
B = [42;32;12;-5;10;18;17];
tic
X = inv(A)*B;
toc
tic
X = A\B;
toc