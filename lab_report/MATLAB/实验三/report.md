 <br>&emsp;<font size=4 face="宋体">学号 <u>Z11714047&emsp;&emsp;&emsp;</u>&emsp;专业<u> &emsp;自动化&emsp;&emsp;&emsp;&emsp;</u>&emsp;姓名<u>&emsp;耿严&emsp;&emsp;&emsp;&emsp;&emsp;</u></font></br>
<br>&emsp;<font size=4 face="宋体">实验日期 <u>&emsp;&emsp;&emsp;&ensp;&emsp;&emsp;</u>&emsp;指导教师<u> &emsp;章军&emsp;&emsp;&emsp;</u>&emsp;实验成绩<u>&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;</u></font></br>
<br>![Alt text](https://raw.githubusercontent.com/gYANnnnn/AHU/master/lab_report/1.png)<br>

# <font  face="华文新魏">安徽大学电气工程及自动化学院本科实验报告</font>



### &ensp;<font face="Microsoft JhengHei">【课程名称】<u>&emsp;&emsp;&emsp;MATLAB程序设计&emsp;&emsp;&emsp;&emsp;&emsp;</u></font>  

### &ensp;<font face="Microsoft JhengHei">【课程目标】</font> <font face="宋体" size=2>（依据教学大纲）</font>

### &ensp;<font face="Microsoft JhengHei">【实验名称】<u>&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;</u></font>  

### &ensp;<font face="Microsoft JhengHei">【实验目的】</font>  

- 练习掌握MATLAB使用教程（第二版）书中第四至第五章函数。

### &ensp;<font face="Microsoft JhengHei">【实验原理及方法】</font>  

- 使用MATLAB或Octave完成书上习题。

### &ensp;<font face="Microsoft JhengHei">【实验内容及过程】</font>  

- 内容：  

  > 4.1，4.2，4.3，4.4，4.6，4.9，5.1，5.2，5.3，5.4，5.5，5.10，5.12，1.14，5.17，5.18，5.19，5.20，5.21，5.23，5.27，5.29  

- 代码：

```matlab

% 4.1
a = [15 3 22;3 8 5;14 3 82;];
b = [1;5;6];
c = [12 18 5 2];
d = a(:, 3);
e = [b, d];
f = [b; d];
g = [c(:, 1:3); a];
h = [a(1,3), c(1,2), b(2,1)];

% 4.2
thermo_scores = [ 1 68 45 92; 2 83 54 93;
                  3 61 67 91; 4 70 66 92;
                  5 75 68 96; 6 82 67 90;
                  7 57 65 86; 8  5 69 89; 
                  9 76 62 97; 10 85 52 94; 
                  11 62 34 87;12 71 45 85;
                  13 96 56 45; 14 78 65 87; 
                  15 76 45 97; 16 68 76 96; 
                  17 72 65 89; 18 75 67 88; 
                  19 83 68 91; 20 93 90 92];
student_5 = thermo_scores(5, :);
test_1 = thermo_scores(:, 2);
std_test = [std(test_1), std(thermo_scores(:, 3)), std(thermo_scores(:, 4))];
var_test = [var(test_1), var(thermo_scores(:, 3)), var(thermo_scores(:, 4))];
scores_sum = sum(thermo_scores(:,2:4), 2);
scores_mean = mean(thermo_scores(:,2:4),2);
thermo_scores = [thermo_scores, scores_sum, scores_mean];
thermo_scores = sortrows(thermo_scores,-6);

% 4.3
times = 0:2:24;
thermocouple = [84.3 90.0 86.7; 86.4 89.5 87.6;
                85.2 88.6 88.3; 87.1 88.9 85.3;
                83.5 88.9 80.3; 84.8 90.4 82.4;
                85.0 89.3 83.4; 85.3 89.5 85.4;
                85.3 88.9 86.3; 85.2 89.1 85.3;
                82.3 89.5 89.0; 84.7 89.4 87.3;
                83.6 89.8 87.2];
thermocouple = [times' thermocouple];
[thermocouple_max, thermocouple_max_space] = max(thermocouple(:,2:4));
[thermocouple_min, thermocouple_min_space] = min(thermocouple(:,2:4));
times_max = times(thermocouple_max_space);
times_min = times(thermocouple_min_space);

% 4.4 
sensor = [ 0 70.6432 68.3470 72.3469 67.6751 73.1764;
           1 73.2823 65.7819 65.4822 71.8548 66.9929;
           2 64.1609 72.4888 70.1794 73.6414 72.7559;
           3 67.6970 77.4425 66.8623 80.5608 64.5008;
           4 68.6878 67.2676 72.6770 63.2135 70.4300;
           5 63.9342 65.7662  2.7644 64.8869 59.9772;
           6 63.4028 68.7683 68.9815 75.1892 67.5346;
           7 74.6561 73.3151 59.7284 68.0510 72.3102;
           8 70.0562 65.7290 70.6628 63.0937 68.3950;
           9 66.7743 63.9934 77.9647 71.5777 76.1828;
          10 74.0286 69.4007 75.0921 77.7662 66.8436;
          11 71.1581 69.6735 62.0980 73.5395 58.3739;
          12 65.0512 72.4265 69.6067 79.7869 63.8418;
          13 76.6979 67.0225 66.5917 72.5227 75.2782;
          14 71.4475 69.2517 64.8772 79.3226 69.4339;
          15 77.3946 67.8262 63.8282 68.3009 71.8961;
          16 75.6901 69.6033 71.4440 64.3011 74.7210;
          17 66.5793 77.6758 67.8535 68.9444 59.3979;
          18 63.5403 66.9676 70.2790 70.9512 66.7766;
          19 69.6354 63.2632 68.1606 64.4190 66.4785];
[sensor_times, sensor_nmu] = size(sensor);
sensor_nmu = sensor_nmu - 1;
[sensor_max,sensor_maxad] = max(sensor(:,2:6));
[sensor_min,sensor_minad] = min(sensor(:,2:6));
sensor_timesmax = sensor(sensor_maxad,1)';
sensor_timesmin = sensor(sensor_minad,1)';
sensor_mean = mean(sensor(:,2:6));
sensor_std = std(sensor(:,2:6));

% 4.6
kPa = [0:100]';
P = 1000 .* kPa;
midu_1 = 13560;
midu_2 = 1000;
g = 9.81;
h = [P ./(midu_1*g)' P./(midu_2*g)]; 

% 4.9
magic_4_9 = magic(6);
% (a)
magic_x_sum = sum(magic_4_9,2);
%(b)
magic_y_sum = sum(magic_4_9);
%(c)
magic_xy_sum = sum(diag(magic_4_9));


% 5.1
x = 0:10;
% a
y1 = exp(x);
figure('name','5.1a')
plot(x,y1)
title('y = e^x')
xlabel('x')
ylabel('y')
grid 
% b
y2 = sin(x);
figure('name','5.1b')
plot(x,y2)
title('sin(x)')
xlabel('x')
ylabel('y')
grid 
% c
a = 5;
b = 2;
c = 4;
y3 = a.*x.^2+b.*x+c;
figure('name','5.1c')
plot(x,y3)
title('a*x^2+b*x+c')
xlabel('x')
ylabel('y')
grid  
% d
y4 = x.^(1/2);
figure('name','5.1d')
plot(x,y4)
title('y = sqrt(x)')
xlabel('x')
ylabel('y')
grid

% 5.2
y = [12, 4, 12, 22, 8, 9];
figure('name','5.2')
plot(y)

% 5.3
x = -pi:pi/100:pi;
y1 = sin(x);
y2 = sin(2*x);
y3 = sin(3*x);
figure('name','5.3');
plot(x,y1, x,y2, x,y3);

% 5.4
figure('name','5.4')
plot(x,y1,'--r', x,y2,'-b', x,y3,':g');

% 5.5
figure('name','5.5');
plot(x,y1,'--r', x,y2,'-b', x,y3,':g');
xlim([-6,6,]);
legend('sinx', 'sin2x', 'sin3x')
title('graph for Chapter5.5')

% 5.10
V = 100;
g = 9.8;
theta = [pi/2 pi/4 pi/6];
t = 0:0.01:20;
[m n] = meshgrid(theta, t);
h = n*V.*cos(m);
v = n*V.*sin(m)-(1/2)*g.*n.^2;
figure('name', '5.10')
plot(h,v)

% 5.12
x = 0:10;
y1 = exp(x);
y2 = sin(x);
y3 = a.*x.^2+b.*x+c;
y4 = x.^(1/2);
figure('name' , '5.12')
subplot(2,2,1)
plot(x,y1)
title('y = exp(x)')
subplot(2, 2, 2)
plot(x, y2)
title('y = sin(x)')
subplot(2,2,3)
plot(x,y3)
title('y = a.*x.^2+b.*x+c')
subplot(2,2,4)
plot(x, y4)
title('y = x.^(1/2)')

% 5.14
theta = 0:2*pi;
r1 = sin(theta).^2+cos(theta).^2;
r2 = sin(theta);
r3 = exp(theta./5);
r4 = sinh(theta);
figure('name', '5.14')
subplot(2,2,1)
polar(theta, r1)
subplot(2,2,2)
polar(theta, r2)
subplot(2,2,3)
polar(theta, r3)
subplot(2,2,4)
polar(theta, r4)

% 5.17
% a
t = 0:2:45;
d = 30*(2.^(t/2));
ans5_17a = [t', d'];
% b
figure('name', '5.17')
subplot(2,2,1)
plot(t, d)
title('x-y线?直角坐标')
subplot(2,2,2)
semilogx(t, d)
title('x轴对数坐标系')
subplot(2,2,3)
semilogy(t, d)
title('y轴对数坐标系')
subplot(2,2,4)
loglog(t, d)
title('双对数坐标系')

% 5.18
t = [1971 1972 1974 1979 1982 1985 1989 1993 1996 1997 1997 1999 1999 1999 2000 2003 2003 2003 2004 2006 2006 2006 2006 2007 2006 2008];
d = [2300 2500 4500 29000 134000 275000 1200000 3100000 4300000 7500000 8800000 9500000 21300000 22000000 42000000 54300000 105900000 220000000 592000000 241000000 291000000 582000000 681000000 789000000 17000000000 2000000000];
figure
semilogy(t,d,'-o');

% 5.19
Q = 1000;
k0 = 10;
R= 8.314;
T = 300:1000;
k = k0 .* exp(-Q./(R.*T));
figure
subplot(2,1,1)
plot(T, k)
subplot(2,1,2)
semilogy(1./T, k)

% 5.20
G = [68 83 61 70 75 82 57 5 76 85 62 71 96 78 76 68 72 75 83 93];
figure
bar(G)
figure
hist(G)

% 5.21
grades=[2, 4, 8, 4, 2];
figure
pie(grades,{'A','B','C','D','E'})
figure
pie3(grades)

% 5.23
num = randn(1, 1000)*3.5 + 70;
figure
hist(num)

% 5.27
x = 0:pi/100:20*pi;
y = x.*sin(x);
z = x.*cos(x);
figure
plot(x,y)
figure
polar(x,y)
figure
plot3(x,y,z)
grid
title('5.27'), xlabel('angle'),ylabel('xsin(x)'),zlabel('xcos(x)')

% 5.29
x = -5:0.5:5;
y = -5:0.5:5;
[X, Y] = meshgrid(x,y);
figure
Z = sin(sqrt(X.^2 + Y.^2));
mesh(Z)
figure
subplot(2,2,1)
surf(Z)
title('surf(Z)')
subplot(2,2,2)
surf(X,Y,Z)
title('surf(X,Y,Z)')
subplot(2,2,3)
surf(Z)
shading interp
title('Contour Plot surf(Z)')
subplot(2,2,4)
surf(X,Y,Z)
shading interp
title('Contour Plot surf(X,Y,Z)')
figure
subplot(1,2,1)
surf(Z)
colormap(autumn)
shading interp
title('Contour Plot surf(Z)')
subplot(1,2,2)
surf(X,Y,Z)
shading interp
title('Contour Plot surf(X,Y,Z)')
figure
subplot(1,2,1)
contour(Z)
title('Contour Plot')
subplot(1,2,2)
surfc(Z)
title('Comiation Surfance and Contour Plot')

```



### &ensp;<font face="Microsoft JhengHei">【实验结果】</font>  



> % 4.1
```
 d =
 
    22
     5
    82
 
 
 e =


     1    22
     5     5
     6    82


f =

     1
     5
     6
    22
     5
    82


g =

    12    18     5
    15     3    22
     3     8     5
    14     3    82


h =

    22    18     5
```

> % 4.2
```
student_5 =

     5    75    68    96


test_1 =

    68
    83
    61
    70
    75
    82
    57
     5
    76
    85
    62
    71
    96
    78
    76
    68
    72
    75
    83
    93


std_test =

   18.6169   12.6911   10.9365


var_test =

  346.5895  161.0632  119.6079


scores_sum =

   205
   230
   219
   228
   239
   239
   208
   163
   235
   231
   183
   201
   197
   230
   218
   240
   226
   230
   242
   275


scores_mean =

   68.3333
   76.6667
   73.0000
   76.0000
   79.6667
   79.6667
   69.3333
   54.3333
   78.3333
   77.0000
   61.0000
   67.0000
   65.6667
   76.6667
   72.6667
   80.0000
   75.3333
   76.6667
   80.6667
   91.6667


thermo_scores =

    1.0000   68.0000   45.0000   92.0000  205.0000   68.3333
    2.0000   83.0000   54.0000   93.0000  230.0000   76.6667
    3.0000   61.0000   67.0000   91.0000  219.0000   73.0000
    4.0000   70.0000   66.0000   92.0000  228.0000   76.0000
    5.0000   75.0000   68.0000   96.0000  239.0000   79.6667
    6.0000   82.0000   67.0000   90.0000  239.0000   79.6667
    7.0000   57.0000   65.0000   86.0000  208.0000   69.3333
    8.0000    5.0000   69.0000   89.0000  163.0000   54.3333
    9.0000   76.0000   62.0000   97.0000  235.0000   78.3333
   10.0000   85.0000   52.0000   94.0000  231.0000   77.0000
   11.0000   62.0000   34.0000   87.0000  183.0000   61.0000
   12.0000   71.0000   45.0000   85.0000  201.0000   67.0000
   13.0000   96.0000   56.0000   45.0000  197.0000   65.6667
   14.0000   78.0000   65.0000   87.0000  230.0000   76.6667
   15.0000   76.0000   45.0000   97.0000  218.0000   72.6667
   16.0000   68.0000   76.0000   96.0000  240.0000   80.0000
   17.0000   72.0000   65.0000   89.0000  226.0000   75.3333
   18.0000   75.0000   67.0000   88.0000  230.0000   76.6667
   19.0000   83.0000   68.0000   91.0000  242.0000   80.6667
   20.0000   93.0000   90.0000   92.0000  275.0000   91.6667


thermo_scores =

   20.0000   93.0000   90.0000   92.0000  275.0000   91.6667
   19.0000   83.0000   68.0000   91.0000  242.0000   80.6667
   16.0000   68.0000   76.0000   96.0000  240.0000   80.0000
    5.0000   75.0000   68.0000   96.0000  239.0000   79.6667
    6.0000   82.0000   67.0000   90.0000  239.0000   79.6667
    9.0000   76.0000   62.0000   97.0000  235.0000   78.3333
   10.0000   85.0000   52.0000   94.0000  231.0000   77.0000
    2.0000   83.0000   54.0000   93.0000  230.0000   76.6667
   14.0000   78.0000   65.0000   87.0000  230.0000   76.6667
   18.0000   75.0000   67.0000   88.0000  230.0000   76.6667
    4.0000   70.0000   66.0000   92.0000  228.0000   76.0000
   17.0000   72.0000   65.0000   89.0000  226.0000   75.3333
    3.0000   61.0000   67.0000   91.0000  219.0000   73.0000
   15.0000   76.0000   45.0000   97.0000  218.0000   72.6667
    7.0000   57.0000   65.0000   86.0000  208.0000   69.3333
    1.0000   68.0000   45.0000   92.0000  205.0000   68.3333
   12.0000   71.0000   45.0000   85.0000  201.0000   67.0000
   13.0000   96.0000   56.0000   45.0000  197.0000   65.6667
   11.0000   62.0000   34.0000   87.0000  183.0000   61.0000
    8.0000    5.0000   69.0000   89.0000  163.0000   54.3333
```

> % 4.3

```

times =

     0     2     4     6     8    10    12    14    16    18    20    22    24


thermocouple =

         0   84.3000   90.0000   86.7000
    2.0000   86.4000   89.5000   87.6000
    4.0000   85.2000   88.6000   88.3000
    6.0000   87.1000   88.9000   85.3000
    8.0000   83.5000   88.9000   80.3000
   10.0000   84.8000   90.4000   82.4000
   12.0000   85.0000   89.3000   83.4000
   14.0000   85.3000   89.5000   85.4000
   16.0000   85.3000   88.9000   86.3000
   18.0000   85.2000   89.1000   85.3000
   20.0000   82.3000   89.5000   89.0000
   22.0000   84.7000   89.4000   87.3000
   24.0000   83.6000   89.8000   87.2000


thermocouple_max =

   87.1000   90.4000   89.0000


thermocouple_max_space =

     4     6    11


thermocouple_min =

   82.3000   88.6000   80.3000


thermocouple_min_space =

    11     3     5


times_max =

     6    10    20


times_min =

    20     4     8
```
> %4.4
```
sensor_nmu =

     5


sensor_times =

    20


sensor_mean =

   69.7259   69.1005   65.3740   70.9799   68.2649


sensor_std =

    4.5471    3.9223   15.3565    5.6100    5.2412


sensor_max =

   77.3946   77.6758   77.9647   80.5608   76.1828


sensor_min =

   63.4028   63.2632    2.7644   63.0937   58.3739


sensor_timesmax =

    15    17     9     3     9


sensor_timesmin =

     6    19     5     8    11
```

> %4.6
> 
```
h =

         0         0
    0.0075    0.1019
    0.0150    0.2039
    0.0226    0.3058
    0.0301    0.4077
    0.0376    0.5097
    0.0451    0.6116
    0.0526    0.7136
    0.0601    0.8155
    0.0677    0.9174
    0.0752    1.0194
    0.0827    1.1213
    0.0902    1.2232
    0.0977    1.3252
    0.1052    1.4271
    0.1128    1.5291
    0.1203    1.6310
    0.1278    1.7329
    0.1353    1.8349
    0.1428    1.9368
    0.1503    2.0387
    0.1579    2.1407
    0.1654    2.2426
    0.1729    2.3445
    0.1804    2.4465
    0.1879    2.5484
    0.1955    2.6504
    0.2030    2.7523
    0.2105    2.8542
    0.2180    2.9562
    0.2255    3.0581
    0.2330    3.1600
    0.2406    3.2620
    0.2481    3.3639
    0.2556    3.4659
    0.2631    3.5678
    0.2706    3.6697
    0.2781    3.7717
    0.2857    3.8736
    0.2932    3.9755
    0.3007    4.0775
    0.3082    4.1794
    0.3157    4.2813
    0.3233    4.3833
    0.3308    4.4852
    0.3383    4.5872
    0.3458    4.6891
    0.3533    4.7910
    0.3608    4.8930
    0.3684    4.9949
    0.3759    5.0968
    0.3834    5.1988
    0.3909    5.3007
    0.3984    5.4027
    0.4059    5.5046
    0.4135    5.6065
    0.4210    5.7085
    0.4285    5.8104
    0.4360    5.9123
    0.4435    6.0143
    0.4510    6.1162
    0.4586    6.2181
    0.4661    6.3201
    0.4736    6.4220
    0.4811    6.5240
    0.4886    6.6259
    0.4962    6.7278
    0.5037    6.8298
    0.5112    6.9317
    0.5187    7.0336
    0.5262    7.1356
    0.5337    7.2375
    0.5413    7.3394
    0.5488    7.4414
    0.5563    7.5433
    0.5638    7.6453
    0.5713    7.7472
    0.5788    7.8491
    0.5864    7.9511
    0.5939    8.0530
    0.6014    8.1549
    0.6089    8.2569
    0.6164    8.3588
    0.6239    8.4608
    0.6315    8.5627
    0.6390    8.6646
    0.6465    8.7666
    0.6540    8.8685
    0.6615    8.9704
    0.6691    9.0724
    0.6766    9.1743
    0.6841    9.2762
    0.6916    9.3782
    0.6991    9.4801
    0.7066    9.5821
    0.7142    9.6840
    0.7217    9.7859
    0.7292    9.8879
    0.7367    9.9898
    0.7442   10.0917
    0.7517   10.1937
```
> % 4.9
> 
```MATLAB
magic_x_sum =

   111
   111
   111
   111
   111
   111


magic_y_sum =

   111   111   111   111   111   111


magic_xy_sum =

   111

```



> % 5.1

| ![](https://raw.githubusercontent.com/gYANnnnn/AHU/master/lab_report/MATLAB/%E5%AE%9E%E9%AA%8C%E4%B8%89/html/Z11714047_01.png) | ![](https://raw.githubusercontent.com/gYANnnnn/AHU/master/lab_report/MATLAB/%E5%AE%9E%E9%AA%8C%E4%B8%89/html/Z11714047_02.png) |
| ------------------------------------------------------------ | ------------------------------------------------------------ |
| ![](https://raw.githubusercontent.com/gYANnnnn/AHU/master/lab_report/MATLAB/%E5%AE%9E%E9%AA%8C%E4%B8%89/html/Z11714047_03.png) | ![](https://raw.githubusercontent.com/gYANnnnn/AHU/master/lab_report/MATLAB/%E5%AE%9E%E9%AA%8C%E4%B8%89/html/Z11714047_04.png) |

>  % 5.2

![](https://raw.githubusercontent.com/gYANnnnn/AHU/master/lab_report/MATLAB/%E5%AE%9E%E9%AA%8C%E4%B8%89/html/Z11714047_05.png)

> % 5.3

![](https://raw.githubusercontent.com/gYANnnnn/AHU/master/lab_report/MATLAB/%E5%AE%9E%E9%AA%8C%E4%B8%89/html/Z11714047_06.png)

> 5.4

![](https://raw.githubusercontent.com/gYANnnnn/AHU/master/lab_report/MATLAB/%E5%AE%9E%E9%AA%8C%E4%B8%89/html/Z11714047_07.png)

>  5.5

![](https://raw.githubusercontent.com/gYANnnnn/AHU/master/lab_report/MATLAB/%E5%AE%9E%E9%AA%8C%E4%B8%89/html/Z11714047_08.png)

>  5.10

![](https://raw.githubusercontent.com/gYANnnnn/AHU/master/lab_report/MATLAB/%E5%AE%9E%E9%AA%8C%E4%B8%89/html/Z11714047_09.png)

> 5.12

![](https://raw.githubusercontent.com/gYANnnnn/AHU/master/lab_report/MATLAB/%E5%AE%9E%E9%AA%8C%E4%B8%89/html/Z11714047_10.png)

> 5.14

![](https://raw.githubusercontent.com/gYANnnnn/AHU/master/lab_report/MATLAB/%E5%AE%9E%E9%AA%8C%E4%B8%89/html/Z11714047_11.png)

> 5.17
```
ans5_17a =

           0          30
           2          60
           4         120
           6         240
           8         480
          10         960
          12        1920
          14        3840
          16        7680
          18       15360
          20       30720
          22       61440
          24      122880
          26      245760
          28      491520
          30      983040
          32     1966080
          34     3932160
          36     7864320
          38    15728640
          40    31457280
          42    62914560
          44   125829120
```

![](https://raw.githubusercontent.com/gYANnnnn/AHU/master/lab_report/MATLAB/%E5%AE%9E%E9%AA%8C%E4%B8%89/html/Z11714047_12.png)

> ％　5.18



![](https://raw.githubusercontent.com/gYANnnnn/AHU/master/lab_report/MATLAB/%E5%AE%9E%E9%AA%8C%E4%B8%89/html/Z11714047_13.png)

> % 5.19



![](https://raw.githubusercontent.com/gYANnnnn/AHU/master/lab_report/MATLAB/%E5%AE%9E%E9%AA%8C%E4%B8%89/html/Z11714047_14.png)

> 5.20

![](https://raw.githubusercontent.com/gYANnnnn/AHU/master/lab_report/MATLAB/%E5%AE%9E%E9%AA%8C%E4%B8%89/html/Z11714047_15.png)

![](https://raw.githubusercontent.com/gYANnnnn/AHU/master/lab_report/MATLAB/%E5%AE%9E%E9%AA%8C%E4%B8%89/html/Z11714047_16.png)

> 5.21

![](https://raw.githubusercontent.com/gYANnnnn/AHU/master/lab_report/MATLAB/%E5%AE%9E%E9%AA%8C%E4%B8%89/html/Z11714047_17.png)



![](https://raw.githubusercontent.com/gYANnnnn/AHU/master/lab_report/MATLAB/%E5%AE%9E%E9%AA%8C%E4%B8%89/html/Z11714047_18.png)

> 5.22

![](https://raw.githubusercontent.com/gYANnnnn/AHU/master/lab_report/MATLAB/%E5%AE%9E%E9%AA%8C%E4%B8%89/html/Z11714047_19.png)

> 5.27

- （a）

  ![](https://raw.githubusercontent.com/gYANnnnn/AHU/master/lab_report/MATLAB/%E5%AE%9E%E9%AA%8C%E4%B8%89/html/Z11714047_20.png)



- （b）

  ![](https://raw.githubusercontent.com/gYANnnnn/AHU/master/lab_report/MATLAB/%E5%AE%9E%E9%AA%8C%E4%B8%89/html/Z11714047_21.png)

- （c）

  ![](https://raw.githubusercontent.com/gYANnnnn/AHU/master/lab_report/MATLAB/%E5%AE%9E%E9%AA%8C%E4%B8%89/html/Z11714047_22.png)

> 5.29
> 
- （a）

  ![](https://raw.githubusercontent.com/gYANnnnn/AHU/master/lab_report/MATLAB/%E5%AE%9E%E9%AA%8C%E4%B8%89/html/Z11714047_23.png)

- （b）

  ![](https://raw.githubusercontent.com/gYANnnnn/AHU/master/lab_report/MATLAB/%E5%AE%9E%E9%AA%8C%E4%B8%89/html/Z11714047_24.png)

- （c）

  ![](https://raw.githubusercontent.com/gYANnnnn/AHU/master/lab_report/MATLAB/%E5%AE%9E%E9%AA%8C%E4%B8%89/html/Z11714047_25.png)

- （d）

  ![](https://raw.githubusercontent.com/gYANnnnn/AHU/master/lab_report/MATLAB/%E5%AE%9E%E9%AA%8C%E4%B8%89/html/Z11714047_26.png)

### &ensp;<font face="Microsoft JhengHei">【数据分析及处理】</font>

### &ensp;<font face="Microsoft JhengHei">【总结或讨论】</font>
