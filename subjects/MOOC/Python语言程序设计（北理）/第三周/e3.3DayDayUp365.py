#e3.3DayDayUp365.py
import math
dayfactor = 0.01
dayup = math.pow((1.0 + dayfactor), 365)   #提高dayfactor
daydown = math.pow((1.0 - dayfactor), 365) #放任dayfactor
print("向上：{:.2f}, 向下：{:.2f}.".format(dayup, daydown))