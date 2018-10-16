#TempConvert.py
TempStr = input()
if TempStr[0] in ['F']:
    C = (eval(TempStr[1:]) - 32)/1.8
    print("C{:.2f}".format(C))
elif TempStr[0] in ['C']:
    F = 1.8*eval(TempStr[1:]) + 32
    print("F{:.2f}".format(F))
else:
    print() #不输入任何错误提示
