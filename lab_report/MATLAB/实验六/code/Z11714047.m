% 8.1
exer8_1 = [0 100;  1 101;  2 102;  3 103; 4 103;  5 104;  6 104;  7 105;  8 106;  9 106; 10 106; 11 105; 12 104; 
          13 103; 14 101; 15 100; 16 99; 17 100; 18 102; 19 104; 20 106; 21 107; 22 105; 23 104; 24 104;];
temp_out = find(exer8_1(:,2)>105);
temp_outnum = length(temp_out);
fprintf('有%d个监测点的温度超出范围。',temp_outnum)
temp_outtimes = exer8_1(temp_out,1);
fprintf('在%d:00时温度超出范围。 \n',temp_outtimes)
temp_under = find(exer8_1(:,2)<102);
temp_undernum = length(temp_under);
fprintf('有%d个监测点的温度低于允许范围。',temp_undernum)
temp_undertimes = exer8_1(temp_under,1);
fprintf('在%d:00时温度低于允许范围。 \n',temp_undertimes)
temp_accept = find(exer8_1(:,2)<=105 & exer8_1(:,2)>=102);
temp_accepttimes = exer8_1(temp_accept,1);
fprintf('在%d:00时温度在允许范围内。 \n',temp_accepttimes)
[temp_max, temp_maxsite] = max(exer8_1(:,2));
temp_maxtime = exer8_1(temp_maxsite,1);
fprintf('检测到的最高温度是%d, 出现最高温度的时间是%d:00。 \n',temp_max,temp_maxtime)

% 8.4
scores = [9.821 9.700; 9.923 9.925; 9.624 9.83; 9.432 9.987; 9.534 9.354; 9.203 9.879];
win_player1 = find(scores(:,1) > scores(:,2));
win_player2 = find(scores(:,1) < scores(:,2));
fprintf('第%d项的获胜者是选手1。 \n',win_player1)
fprintf('第%d项的获胜者是选手2。 \n',win_player2')
win_mean = mean(scores);
fprintf('第一位选手平均值是%f，第二位选手平均值是%f。 \n',win_mean)

% 8.14
earn = input('Please enter your annual income:');
if(earn <= 30000)
    pay_per = earn * (10/100);
    pay_com = earn * (10/100);
elseif(earn <= 60000)
    pay_per = earn * (10/100);
    pay_com = 30000 * (10/100) + (earn - 30000) * (5/100);
elseif(earn <= 100000)
    pay_per = 60000 * (10/100) + (earn - 60000) * (8/100);
    pay_com = 30000 * (10/100) + (60000 - 30000) * (5/100);
else
    pay_per = 60000 * (10/100) + (100000 - 60000) * (8/100);
    pay_com = 0;
end
pay_sum = pay_per + pay_com;
fprintf('每年存入账户的总金额为：%f。\n',pay_sum)

% 8.18
x = [1 23 43 72 87 56 98 33];
j = 0;
for i = 1:length(x);
    j = j + x(i);
end
sum_for = j;
fprintf('用for循环结构求得矢量和为%d。 \n',sum_for)

% 8.22
p = primes(100);
for i = 1:(length(p)-1)
    primes_sum(i) = p(i) * p(i+1);
end
disp(primes_sum)

% 8.23
Fibonacci_num = input('please enter the first and second number:');
b = input('please enter the number of terms:');
num_terms = 1:b;
for i = 2:(b - 1)
    Fibonacci_num(i+1) = Fibonacci_num(i) + Fibonacci_num(i - 1);
end
polar(num_terms,Fibonacci_num)

% 8.24
Fibonacci_num = input('please enter the first and second number:');
b = input('please enter the number of terms:');
num_terms = 1:b;
i = 2;
while (i < b)
    Fibonacci_num(i+1) = Fibonacci_num(i) + Fibonacci_num(i - 1);
    i = i+1;
end
polar(num_terms,Fibonacci_num)

% 8.27
money_sum = 1000;
month_sum = 18*12;
month_num = 1:month_sum;
for i=1:(month_sum - 1)
    money_sum(i+1) = money_sum(i) + money_sum(i)*(0.5/100) + 100;
end
plot(month_num,money_sum)
grid on

% 8.28
increase = [10 8 10 16 15 4 6 7 8 10 8 12 14 15 8 7 6 5 7 8 9 8];
education_pay = 5000;
year_num = 1:4;
for i = 2:4
    education_pay(i) = education_pay(i-1)*(1+(increase(i-1)/100));
end
table = [year_num;education_pay];
fprintf('大学第%d年的教育费用为%f。 \n',table)

    