<br>&emsp;<font size=4 face="宋体">学号 <u>Z11714047&emsp;&emsp;&emsp;</u>&emsp;专业<u> &emsp;自动化&emsp;&emsp;&emsp;&emsp;</u>&emsp;姓名<u>&emsp;耿严&emsp;&emsp;&emsp;&emsp;&emsp;</u></font></br>
<br>&emsp;<font size=4 face="宋体">实验日期 <u>&emsp;&emsp;&emsp;&ensp;&emsp;&emsp;</u>&emsp;指导教师<u> &emsp;&emsp;&emsp;&emsp;&emsp;&emsp;</u>&emsp;实验成绩<u>&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;</u></font></br>
<br><center>![Alt text](https://raw.githubusercontent.com/gYANnnnn/AHU/master/lab_report/1.png)</center></br>
# <center><font  face="华文新魏">安徽大学电气工程及自动化学院本科实验报告</font></center>  



### &ensp;<font face="Microsoft JhengHei">【课程名称】<u>&emsp;&emsp;&emsp;MATLAB程序设计&emsp;&emsp;&emsp;&emsp;&emsp;</u></font>
### &ensp;<font face="Microsoft JhengHei">【课程目标】</font> <font face="宋体" size=2>（依据教学大纲）</font>
### &ensp;<font face="Microsoft JhengHei">【实验名称】<u>&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;</u></font>
### &ensp;<font face="Microsoft JhengHei">【实验目的】</font>  

- 练习掌握MATLAB使用教程（第二版）书中第八至第九章函数。

### &ensp;<font face="Microsoft JhengHei">【实验原理及方法】</font> 

- 使用MATLAB或Octave完成书上习题。

### &ensp;<font face="Microsoft JhengHei">【实验内容及过程】</font> 

- 内容

  > 8.1，8.4，8.14，8.18，8.22，8.23，8.24，8.27，8.28
  >
  > 9.2，9.3，9.4，9.7，9.8，9.14，9.18，9.19  

- 代码

  ```matlab
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
  disp('小于100的素数相邻两个素数的乘积：')
  disp(primes_sum)
  
  % 8.23
  clear
  Fibonacci_num = input('please enter the first and second number:');
  b = input('please enter the number of terms:');
  num_terms = 1:b;
  for i = 2:(b - 1)
      Fibonacci_num(i+1) = Fibonacci_num(i) + Fibonacci_num(i - 1);
  end
  disp('斐波那契数列：')
  disp(Fibonacci_num)
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
  disp('斐波那契数列：')
  disp(Fibonacci_num)
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
  A = [3 4 2 -1 1 7 1;2 -2 3 -4 5 2 8;1 2 3 1 2 4 6;5 10 4 3 9 -2 1;3 2 -2 -4 -5 -6 7;-2 9 1 3 -3 5 1;1 -2 -8 4 2 4 5];
  B = [42;32;12;-5;10;18;17];
  tic
  X = inv(A)*B;
  toc
  tic
  X = A\B;
  toc
  ```


### &ensp;<font face="Microsoft JhengHei">【实验结果】</font> 

- 运行结果
  - 8.1
  ```matlab
  有5个监测点的温度超出范围。在8:00时温度超出范围。
  在9:00时温度超出范围。
  在10:00时温度超出范围。
  在20:00时温度超出范围。
  在21:00时温度超出范围。
  有6个监测点的温度低于允许范围。在0:00时温度低于允许范围。
  在1:00时温度低于允许范围。
  在14:00时温度低于允许范围。
  在15:00时温度低于允许范围。
  在16:00时温度低于允许范围。
  在17:00时温度低于允许范围。
  在2:00时温度在允许范围内。
  在3:00时温度在允许范围内。
  在4:00时温度在允许范围内。
  在5:00时温度在允许范围内。
  在6:00时温度在允许范围内。
  在7:00时温度在允许范围内。
  在11:00时温度在允许范围内。
  在12:00时温度在允许范围内。
  在13:00时温度在允许范围内。
  在18:00时温度在允许范围内。
  在19:00时温度在允许范围内。
  在22:00时温度在允许范围内。
  在23:00时温度在允许范围内。
  在24:00时温度在允许范围内。
  检测到的最高温度是107, 出现最高温度的时间是21:00。
  ```

  -  8.4
    ```matlab
    第1项的获胜者是选手1。
    第5项的获胜者是选手1。
    第2项的获胜者是选手2。
    第3项的获胜者是选手2。
    第4项的获胜者是选手2。
    第6项的获胜者是选手2。
    第一位选手平均值是9.589500，第二位选手平均值是9.779167。
    ```
  - 8.14
   ```matlab
  Please enter your annual income:100000
  每年存入账户的总金额为：13700.000000。
   ```
  - 8.18
  ```matlab
  用for循环结构求得矢量和为413。
  ```
  - 8.22
  ```matlab
  小于100的素数相邻两个素数的乘积：
  1 至 12 列
  6 15 35 77 143 221 323 437
  667 899 1147 1517
  13 至 24 列
  1763 2021 2491 3127 3599 4087 4757 5183
  5767 6557 7387 8633
  ```
  - 8.23
  ```matlab
  please enter the first and second number:[1 1]
  please enter the number of terms:7
  MATLAB 命令行窗口第 2 页
  斐波那契数列：
  1 1 2 3 5 8 13
  ```
  >![](https://raw.githubusercontent.com/gYANnnnn/AHU/master/lab_report/MATLAB/%E5%AE%9E%E9%AA%8C%E5%85%AD/picture/8_23.png)
  >

  - 8.24
  ```matlab
  please enter the first and second number:[1 1]
  please enter the number of terms:7
  斐波那契数列：
  1 1 2 3 5 8 13
  ```
  >![](https://raw.githubusercontent.com/gYANnnnn/AHU/master/lab_report/MATLAB/%E5%AE%9E%E9%AA%8C%E5%85%AD/picture/8_23.png)
  >

  - 8.27
  >![](https://raw.githubusercontent.com/gYANnnnn/AHU/master/lab_report/MATLAB/%E5%AE%9E%E9%AA%8C%E5%85%AD/picture/8_27.png)
  >

  - 8.28
  ```matlab
  大学第1年的教育费用为5000.000000。
  大学第2年的教育费用为5500.000000。
  大学第3年的教育费用为5940.000000。
  大学第4年的教育费用为6534.000000。
  ```
  - 9.2
  ```matlab
  总质量为3210。
  ```
  - 9.3
  ```matlab
  总账单为27.650000。
  ```
  - 9.4
  ```matlab
   弹式量热器的总热容为5.415000e+02。
  ```
  - 9.7
  ```matlab
  (a)中A*8等于：
      24   144
       6    36
  
  (a)中B*A等于：
      60   -52
       0     0
  
  (b)中A*8等于：
      67    18
      80    28
  
  (b)中B*A等于：
       6    10    14
      19    41    63
       8    28    48
  ```
  - 9.8
  ```matlab
  Ann 的话费为27.65。
  Fred 的花费为32.9。
  ```
  - 9.14
  ```matlab
  A存在逆矩阵：
      0.3571    0.0714
     -0.2857    0.1429
  
  B不存在逆矩阵
  C存在逆矩阵：
      0.5000         0         0
      0.6250    0.0000   -0.2500
     -0.8750    0.5000    0.2500
  ```
  - 9.18
  ```matlab
  ( a )
  逆矩阵法求得线性方程组的解为：
      2.3333
      7.6667
  
  左除法求得线性方程组的解为：
      2.3333
      7.6667
  
  ( b )
  逆矩阵法求得线性方程组的解为：
      3.1613
     -2.2581
     -0.9677
  
  左除法求得线性方程组的解为：
      3.1613
     -2.2581
     -0.9677
  
  ( c )
  逆矩阵法求得线性方程组的解为：
     12.0000
     -8.2500
     -3.5000
     -0.2500
  
  左除法求得线性方程组的解为：
     12.0000
     -8.2500
     -3.5000
     -0.2500
  ```
  - 9.19
  ```matlab
  时间已过 0.000208 秒。
  时间已过 0.000100 秒。
  ```

### &ensp;<font face="Microsoft JhengHei">【数据分析及处理】</font>
### &ensp;<font face="Microsoft JhengHei">【总结或讨论】</font>

