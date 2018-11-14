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
   %n = input('pleast input n: ');
   n = 7;
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

### &ensp;<font face="Microsoft JhengHei">【数据分析及处理】</font>

### &ensp;<font face="Microsoft JhengHei">【总结或讨论】</font>

   ```

   ```