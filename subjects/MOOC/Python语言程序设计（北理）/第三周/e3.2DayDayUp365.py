#e3.2DayDayUp365.py
import math
dayup = math.pow((1.0 + 0.005), 365)   #提高0.005
daydown = math.pow((1.0 - 0.005), 365) #放任0.005
print("向上：{:.2f}, 向下：{:.2f}.".format(dayup, daydown))