CurStr = input()
if CurStr[:3] == "RMB":
    print("USD{:.2f}".format(eval(CurStr[3:])/6.78))
elif CurStr[:3] in ['USD']:
    print("RMB{:.2f}".format(eval(CurStr[3:])*6.78))


