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
