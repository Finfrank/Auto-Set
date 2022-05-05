a,b=map(int,input().split())
f=False
i=0
while i<=a:
    if (i*2+(a-i)*4)!=b:
        i+=1
    else:
        break
if 0<i<=a:
    print(i,a-i,end=' ')
else:
    print("Data Error!")