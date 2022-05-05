try:
    s=input()
    if s[-1] in ['c','C']:
        F=eval(s[0:-1])*1.8+32
        if s[-1]=='c':
            print("{:.2f}f".format(F))
        else:
            print("{:.2f}F".format(F))
    elif s[-1] in ['f','F']:
        C = (eval(s[0:-1])-32)/1.8
        if s[-1]=='f':
            print("{:.2f}c".format(C))
        else:
            print("{:.2f}C".format(C))
    else:
        print("输入错误，末位只能是'C','c','F','f'")
except NameError:
    print("试图访问的变量名不存在")
except SyntaxError:
    print("存在语法错误")
