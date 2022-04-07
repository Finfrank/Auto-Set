list01=[]
while True:
    try:
        r=float(input())
    except:
        break
    else:
        list01.append(r)
for i in list01:
    if i==list01[-1]:
        print('%.3f'%(4/3*3.1415927*i**3),end='')
    else:
        print('%.3f'%(4/3*3.1415927*i**3))

