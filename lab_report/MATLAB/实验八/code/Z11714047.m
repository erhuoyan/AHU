% 10.1
% 双精度计算
n = 1:1e7;
harmonic = 1./n;
partial_sum = cumsum(harmonic);
m = 1000:1000:1e7;
partial_sums_selected = partial_sum(m);
plot(partial_sums_selected);
% 单精度计算
n = single(1:1e7);
harmonic = 1./n;
partial_sum = cumsum(harmonic);
m = 1000:1000:1e7;
partial_sums_selected = partial_sum(m);
hold on
plot(partial_sums_selected,':');
legend('双精度','单精度')

% 10.6
x = char('8','5');
l=length(x);
h = [double('8');double('5')];
y = num2str(h);
table = [y x];
fprintf('该数组有%d个元素\n',l)
fprintf('%c%c表示字符%c\n',table')

% 10.7
A = [1 2;3 4];
B = [10 20;30 40];
C = [3 6;9 12];
% a
ABC(:,:,1) = A;
ABC(:,:,2) = B;
ABC(:,:,3) = C;
disp('ABC = ')
disp(ABC)

% b
Column_A1B1C1 = [A(:,1),B(:,1),C(:,1)];
disp('Column_A1B1C1 = ')
disp(Column_A1B1C1)

% c
Row_A2B2C2 = [A(2,:);B(2,:);C(2,:)];
disp('Row_A2B2C2')
disp(Row_A2B2C2)

% d
number = ABC(1,2,3);
fprintf('第1行、第2列、第3页的数值是%d。 \n',number)


% 10.12
thermocouple = [84.3 90.0 86.7
                86.4 89.5 87.6
                85.2 88.6 88.3
                87.1 88.9 85.3
                83.5 88.9 80.3
                84.8 90.4 82.4
                85.0 89.3 83.4
                85.3 89.5 85.4
                85.3 88.9 86.3
                85.2 89.1 85.3
                82.3 89.5 89.0
                84.7 89.4 87.3
                83.6 89.8 87.2];
[rows,cols] = size(thermocouple);
for k = 1:cols
    file_name = ['thermocou-ple',num2str(k)]
    date = thermocouple(:,k)
    save(file_name,'date')
end

% 10.16
A = ['aluminum'];
B = ['copper'];
C = ['iron'];
D = ['molybdenum'];
E = ['cobalt'];
my_cellarray = {A,B,C,D,E};
celldisp(my_cellarray)