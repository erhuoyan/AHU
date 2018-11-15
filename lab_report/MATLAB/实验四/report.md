 <br>&emsp;<font size=4 face="宋体">学号 <u>Z11714047&emsp;&emsp;&emsp;</u>&emsp;专业<u> &emsp;自动化&emsp;&emsp;&emsp;&emsp;</u>&emsp;姓名<u>&emsp;耿严&emsp;&emsp;&emsp;&emsp;&emsp;</u></font></br>
<br>&emsp;<font size=4 face="宋体">实验日期 <u>&emsp;&emsp;&emsp;&ensp;&emsp;&emsp;</u>&emsp;指导教师<u> &emsp;章军&emsp;&emsp;&emsp;</u>&emsp;实验成绩<u>&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;</u></font></br>
<br>![Alt text](https://raw.githubusercontent.com/gYANnnnn/AHU/master/lab_report/1.png)<br>

# <font  face="华文新魏">安徽大学电气工程及自动化学院本科实验报告</font>



### &ensp;<font face="Microsoft JhengHei">【课程名称】<u>&emsp;&emsp;&emsp;MATLAB程序设计&emsp;&emsp;&emsp;&emsp;&emsp;</u></font>  

### &ensp;<font face="Microsoft JhengHei">【课程目标】</font> <font face="宋体" size=2>（依据教学大纲）</font>

### &ensp;<font face="Microsoft JhengHei">【实验名称】<u>&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;</u></font>  

### &ensp;<font face="Microsoft JhengHei">【实验目的】</font>  

- 练习掌握MATLAB使用教程（第二版）书中第六至第七章函数。

### &ensp;<font face="Microsoft JhengHei">【实验原理及方法】</font>  

- 使用MATLAB或Octave完成书上习题。

### &ensp;<font face="Microsoft JhengHei">【实验内容及过程】</font>  

- 内容

  > 6.1， 6.2，6.4，6.5，6.6，6.7， 6.9，6.10，6.11，6.13，6.14，6.15 
  >
  > 7.1,7.2,7.3,.9,7.10,7.12,7.13.7.16
 - 代码

   - 主程序
   ```matlab
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
   n = input('pleast input n: ')
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
   
   % 7.1
   x = input(' Enter a value : ');
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
   ```
   - 自定义函数
   ```matlab
   % 6.1
   % num_grains
   function output = num_grains(n)
   output = 2.^(n-1);
   
   % 6.2 
   %energy
   function output = energy(m)
   c = 2.9979*10^8;
   output = m*c^2;
   
   % 6.4
   % nmoles
   function output = nmoles(x,y)
   output = x./y;
   
   % 6.5
   % mass
   function output = mass(x,y)
   output = x.*y;
   
   % 6.6
   % distance
   function output = distance(x,y)
   output = sqrt(2.*x.*y+y.^2);
   
   % 6.7
   %height
   function output = height(x)
   output = (-9.8/2).*x.^2 + 125.*x + 500;
   
   % 6.9
   % polygon
   function polygon(n)
   if n >=3
       t = 2*pi/n;
       theta = 0:t:2*pi;
       r = 2*ones(size(theta));
       polar(theta,r);
   else
       disp('error')
   end
   
   % 6.10
   %F_to_K
   function output = F_to_K(x)
   output = (5/9).*(x+459.67); 
   % C_to_R
   function output = C_to_R(x)
   output = (9/5)*x + 32 + 459.67;
   % C_to_F
   function output = C_to_F(x)
   output = (9/5)*x + 32;
   
   % 6.15
   % temperature_conversions
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
   
   ```
   
   

### &ensp;<font face="Microsoft JhengHei">【实验结果】</font>  

> % 6.1
>
>![](https://raw.githubusercontent.com/gYANnnnn/AHU/master/lab_report/MATLAB/%E5%AE%9E%E9%AA%8C%E5%9B%9B/html/Z11714047_01.png)

> %6.2
>
> ![](https://raw.githubusercontent.com/gYANnnnn/AHU/master/lab_report/MATLAB/%E5%AE%9E%E9%AA%8C%E5%9B%9B/html/Z11714047_02.png)  

> %6.4
>
> ```matlab
>     0.0128    0.0217    0.0098
>     0.0256    0.0434    0.0196
>     0.0384    0.0651    0.0293
>     0.0512    0.0868    0.0391
>     0.0640    0.1085    0.0489
>     0.0768    0.1302    0.0587
>     0.0896    0.1519    0.0684
>     0.1024    0.1736    0.0782
>     0.1152    0.1954    0.0880
>     0.1280    0.2171    0.0978
> ```

> % 6.5
> ```
> 1.0e+03 *
> 
>  0.0781    0.0461    0.1023
>   0.1562    0.0921    0.2046
>   0.2343    0.1382    0.3069
>   0.3125    0.1843    0.4092
>   0.3906    0.2304    0.5115
>   0.4687    0.2764    0.6138
>   0.5468    0.3225    0.7161
>   0.6249    0.3686    0.8184
>   0.7030    0.4146    0.9207
>   0.7812    0.4607    1.0230
> ```

> % 6.6
> ```
> 1.0e+05 *
> 
>  Columns 1 through 7
> 
>        0    0.8818    1.2471    1.5274    1.7637    1.9719    2.1601
>        0    0.6432    0.9097    1.1141    1.2865    1.4384    1.5757
> 
>
>  Columns 8 through 11
>
>    2.3332    2.4943    2.6456    2.7888
>    1.7019    1.8195    1.9299    2.0343
> ```

> % 6.7
>
> ![](https://raw.githubusercontent.com/gYANnnnn/AHU/master/lab_report/MATLAB/%E5%AE%9E%E9%AA%8C%E5%9B%9B/html/Z11714047_03.png)

> % 6.9
> ```
> pleast input n: 7
>n =  7
> ```
> ![](https://raw.githubusercontent.com/gYANnnnn/AHU/master/lab_report/MATLAB/%E5%AE%9E%E9%AA%8C%E5%9B%9B/html/Z11714047_04.png)

> % 6.10
> ```
> F_to_K
>        0  255.3722
>  10.0000  260.9278
>  20.0000  266.4833
>  30.0000  272.0389
>  40.0000  277.5944
>  50.0000  283.1500
>  60.0000  288.7056
>  70.0000  294.2611
>  80.0000  299.8167
>  90.0000  305.3722
> 100.0000  310.9278
> 110.0000  316.4833
> 120.0000  322.0389
> 130.0000  327.5944
> 140.0000  333.1500
> 150.0000  338.7056
> 160.0000  344.2611
> 170.0000  349.8167
> 180.0000  355.3722
> 190.0000  360.9278
> 200.0000  366.4833
> 
> C_to_R
>        0  491.6700
>   4.1667  499.1700
>   8.3333  506.6700
>  12.5000  514.1700
>  16.6667  521.6700
>  20.8333  529.1700
>  25.0000  536.6700
>  29.1667  544.1700
>  33.3333  551.6700
>  37.5000  559.1700
>  41.6667  566.6700
>  45.8333  574.1700
>  50.0000  581.6700
>  54.1667  589.1700
>  58.3333  596.6700
>  62.5000  604.1700
>  66.6667  611.6700
>  70.8333  619.1700
>  75.0000  626.6700
>  79.1667  634.1700
>  83.3333  641.6700
>  87.5000  649.1700
>  91.6667  656.6700
>  95.8333  664.1700
> 100.0000  671.6700
> 
> C_to_F
>    0    32
>    5    41
>   10    50
>   15    59
>   20    68
>   25    77
>   30    86
>   35    95
>   40   104
>   45   113
>   50   122
>   55   131
>   60   140
>   65   149
>   70   158
>   75   167
>   80   176
>   85   185
>   90   194
>   95   203
>  100   212
> ```

> % 6.11
> ```
> Pa：
>  1.0e+05 *
> 
>   0.6644    0.7973    0.9302    1.0631    1.1960    1.3289
> 
> atm：
>  1.0e+10 *
> 
>   0.6732    0.8079    0.9425    1.0772    1.2118    1.3465
> ```

> % 6.13
>
> ![](https://raw.githubusercontent.com/gYANnnnn/AHU/master/lab_report/MATLAB/%E5%AE%9E%E9%AA%8C%E5%9B%9B/html/Z11714047_05.png)
> ```matlab
> 函数最小值
>   2.2516
> ```

> % 6.14
>
> ![](https://raw.githubusercontent.com/gYANnnnn/AHU/master/lab_report/MATLAB/%E5%AE%9E%E9%AA%8C%E5%9B%9B/html/Z11714047_06.png)
>
> ```matlab
> 火箭返回地面所用时间
>  29.0257
> ```

> % 6.15    
>结果同6.10

>  % 7.1
>  ```
>  Enter a value : pi/6
>  x =
>  0.52360
>  sin(x) =
>  0.50000
>  ```

> % 7.2
> ```
> Enter a values for x in brackets = [1 5 3 8 9 22]
> x =
>   1    5    3    8    9   22
> The maxinum is :
> 22
> ```

> % 7.3
> ```
> Enter the base area : 2
> Enter the high : 2
> s =
> 2
> h =
> 2
> The volume of cone is
> 1.3333
> ```

> % 7.9
> ```
> 1 times 6 is 6
> 2 times 6 is 12
> 3 times 6 is 18
> 4 times 6 is 24
> 5 times 6 is 30
> 6 times 6 is 36
> 7 times 6 is 42
> 8 times 6 is 48
> 9 times 6 is 54
> 10 times 6 is 60
> 11 times 6 is 66
> 12 times 6 is 72
> 13 times 6 is 78
> ```

> % 7.10
> ```
> Table for sinusoidal mathematics
>   angle       sines
>   0.00        0.00
>   0.31        0.31
>   0.63        0.59
>   0.94        0.81
>   1.26        0.95
>   1.57        1.00
>   1.88        0.95
>   2.20        0.81
>   2.51        0.59
>   2.83        0.31
>   3.14        0.00
>   3.46       -0.31
>   3.77       -0.59
>   4.08       -0.81
>   4.40       -0.95
>   4.71       -1.00
>   5.03       -0.95
>   5.34       -0.81
>   5.65       -0.59
>   5.97       -0.31
>   6.28       -0.00
> ```

> % 7.12
> ```
>     JRE To USD
>   JPY    USD
>   5.00     0.04
>  10.00     0.09
>  15.00     0.13
>  20.00     0.18
>  25.00     0.22
>  30.00     0.26
>  35.00     0.31
>  40.00     0.35
>  45.00     0.40
>  50.00     0.44
>  55.00     0.48
>  60.00     0.53
>  65.00     0.57
>  70.00     0.62
>  75.00     0.66
>  80.00     0.70
>  85.00     0.75
>  90.00     0.79
>  95.00     0.83
> 100.00     0.88
> 105.00     0.92
> 110.00     0.97
> 115.00     1.01
> 120.00     1.05
> 125.00     1.10
> 
>   EUR To USD
>   EUR     USD
>   1.00     1.13
>   3.00     3.40
>   5.00     5.67
>   7.00     7.93
>   9.00    10.20
>  11.00    12.47
>  13.00    14.73
>  15.00    17.00
>  17.00    19.27
>  19.00    21.53
>  21.00    23.80
>  23.00    26.07
>  25.00    28.34
>  27.00    30.60
>  29.00    32.87
>  31.00    35.14
>  33.00    37.40
>  35.00    39.67
>  37.00    41.94
>  39.00    44.20
>  41.00    46.47
>  43.00    48.74
>  45.00    51.00
>  47.00    53.27
>  49.00    55.54
>  51.00    57.80
>  53.00    60.07
>  55.00    62.34
>  57.00    64.60
>  59.00    66.87
>  
> Exchange rate conversion table
>    USD      EUR      GBP    JPY
>    1.00     0.88     0.77   113.82
>    2.00     1.76     1.54   227.64
>    3.00     2.65     2.31   341.46
>    4.00     3.53     3.08   455.28
>    5.00     4.41     3.85   569.10
>    6.00     5.29     4.62   682.92
>    7.00     6.18     5.39   796.74
>    8.00     7.06     6.17   910.56
>    9.00     7.94     6.94  1024.38
>   10.00     8.82     7.71  1138.20
> ```

> % 7.13
> ```
> 
> What temperature increments would you like calculated? 20
> 温度转换表:华氏温度 to 开氏温度
> 华氏温度   开氏温度
>   0.00   255.37
>  20.00   266.48
>  40.00   277.59
>  60.00   288.71
>  80.00   299.82
> 100.00   310.93
> 120.00   322.04
> 140.00   333.15
> 160.00   344.26
> 180.00   355.37
> 200.00   366.48
>
>Enter the Starting temperature: 0
>What temperature increments would you like calculated? 100
>温度转换表:摄氏温度 to 兰金温度
>摄氏温度   兰金温度
>    0.00   491.67
>  100.00   671.67
>  200.00   851.67
>  300.00  1031.67
>  400.00  1211.67
>  500.00  1391.67
>  600.00  1571.67
>  700.00  1751.67
>  800.00  1931.67
>  900.00  2111.67
> 1000.00  2291.67
> 1100.00  2471.67
> 1200.00  2651.67
> 1300.00  2831.67
> 1400.00  3011.67
> 1500.00  3191.67
> 1600.00  3371.67
> 1700.00  3551.67
> 1800.00  3731.67
> 1900.00  3911.67
> 2000.00  4091.67
> 2100.00  4271.67
> 2200.00  4451.67
> 2300.00  4631.67
> 2400.00  4811.67
>
>Enter the Starting temperature: 0
>What temperature increments would you like calculated? 10
>Enter the Line number10
>温度转换表:摄氏温度 to 华氏温度
>摄氏温度   华氏温度
>    0.00    32.00
>   10.00    37.56
>   20.00    43.11
>   30.00    48.67
>   40.00    54.22
>   50.00    59.78
>   60.00    65.33
>   70.00    70.89
>   80.00    76.44
>   90.00    82.00
> ```

> % 7.16
>
> ![](https://raw.githubusercontent.com/gYANnnnn/AHU/master/lab_report/MATLAB/%E5%AE%9E%E9%AA%8C%E4%BA%94/picture/Z11714047.png)
>
> ```
> z = 
>   1.3693
> ```

### &ensp;<font face="Microsoft JhengHei">【数据分析及处理】</font>

### &ensp;<font face="Microsoft JhengHei">【总结或讨论】</font>

