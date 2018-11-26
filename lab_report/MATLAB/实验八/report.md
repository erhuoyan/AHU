<br>&emsp;<font size=4 face="宋体">学号 <u>Z11714047&emsp;&emsp;&emsp;</u>&emsp;专业<u> &emsp;自动化&emsp;&emsp;&emsp;&emsp;</u>&emsp;姓名<u>&emsp;耿严&emsp;&emsp;&emsp;&emsp;&emsp;</u></font></br>
<br>&emsp;<font size=4 face="宋体">实验日期 <u>&emsp;&emsp;&emsp;&ensp;&emsp;&emsp;</u>&emsp;指导教师<u> &emsp;&emsp;&emsp;&emsp;&emsp;&emsp;</u>&emsp;实验成绩<u>&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;</u></font></br>
<br><center>![Alt text](https://raw.githubusercontent.com/gYANnnnn/AHU/master/lab_report/1.png)</center></br>

# <center><font  face="华文新魏">安徽大学电气工程及自动化学院本科实验报告</font></center>  



### &ensp;<font face="Microsoft JhengHei">【课程名称】<u>&emsp;&emsp;&emsp;MATLAB程序设计&emsp;&emsp;&emsp;&emsp;&emsp;</u></font>
### &ensp;<font face="Microsoft JhengHei">【课程目标】</font> <font face="宋体" size=2>（依据教学大纲）</font>
### &ensp;<font face="Microsoft JhengHei">【实验名称】<u>&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;</u></font>
### &ensp;<font face="Microsoft JhengHei">【实验目的】</font>  

- 练习掌握MATLAB使用教程（第二版）书中第十章函数。

### &ensp;<font face="Microsoft JhengHei">【实验原理及方法】</font> 

- 使用MATLAB或Octave完成书上习题。

### &ensp;<font face="Microsoft JhengHei">【实验内容及过程】</font> 

- 内容

  > 10.1 10.6 10.7 10.12 10.16
  >

- 代码

  ```matlab
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
  ```


### &ensp;<font face="Microsoft JhengHei">【实验结果】</font> 

- 运行结果
  - 10.1
  > ![](https://raw.githubusercontent.com/erhuoyan/AHU/master/lab_report/MATLAB/%E5%AE%9E%E9%AA%8C%E5%85%AB/html/Z11714047_01.png)

  -  10.6
    ```matlab
  该数组有2个元素
  56表示字符8
  53表示字符5
    ```
  - 10.7
   ```matlab
  ABC = 
  
  (:,:,1) =
  
       1     2
       3     4
  
  
  (:,:,2) =
  
      10    20
      30    40
  
  
  (:,:,3) =
  
       3     6
       9    12
  
  Column_A1B1C1 = 
       1    10     3
       3    30     9
  
  Row_A2B2C2
       3     4
      30    40
       9    12
  
  第1行、第2列、第3页的数值是6。 
   ```
  - 10.12
  ```matlab
  file_name =
  
  thermocou-ple1
  
  
  date =
  
     84.3000
     86.4000
     85.2000
     87.1000
     83.5000
     84.8000
     85.0000
     85.3000
     85.3000
     85.2000
     82.3000
     84.7000
     83.6000
  
  
  file_name =
  
  thermocou-ple2
  
  
  date =
  
     90.0000
     89.5000
     88.6000
     88.9000
     88.9000
     90.4000
     89.3000
     89.5000
     88.9000
     89.1000
     89.5000
     89.4000
     89.8000
  
  
  file_name =
  
  thermocou-ple3
  
  
  date =
  
     86.7000
     87.6000
     88.3000
     85.3000
     80.3000
     82.4000
     83.4000
     85.4000
     86.3000
     85.3000
     89.0000
     87.3000
     87.2000
  ```
  - 10.16
  ```matlab
  my_cellarray{1} =
   
  aluminum
   
   
  my_cellarray{2} =
   
  copper
   
   
  my_cellarray{3} =
   
  iron
   
   
  my_cellarray{4} =
   
  molybdenum
   
   
  my_cellarray{5} =
   
  cobalt
  ```
### &ensp;<font face="Microsoft JhengHei">【数据分析及处理】</font>
### &ensp;<font face="Microsoft JhengHei">【总结或讨论】</font>

