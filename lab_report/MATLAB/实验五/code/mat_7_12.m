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


