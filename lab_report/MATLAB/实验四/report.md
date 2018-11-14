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
> ![](https://raw.githubusercontent.com/gYANnnnn/AHU/master/lab_report/MATLAB/%E5%AE%9E%E9%AA%8C%E5%9B%9B/html/Z11714047_01.png)

> %6.2
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
> ![](https://raw.githubusercontent.com/gYANnnnn/AHU/master/lab_report/MATLAB/%E5%AE%9E%E9%AA%8C%E5%9B%9B/html/Z11714047_05.png)
> ```matlab
> 函数最小值
>   2.2516
> ```

> % 6.14
> ![](https://raw.githubusercontent.com/gYANnnnn/AHU/master/lab_report/MATLAB/%E5%AE%9E%E9%AA%8C%E5%9B%9B/html/Z11714047_06.png)
>
> ```matlab
> 火箭返回地面所用时间
>  29.0257
> ```

> % 6.15    
>结果同6.10

### &ensp;<font face="Microsoft JhengHei">【数据分析及处理】</font>

### &ensp;<font face="Microsoft JhengHei">【总结或讨论】</font>

