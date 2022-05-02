n= int(input())
n0=2
n1=1
s=0
for i in range(1,n+1):
    s+=n0/n1
    p=n0
    n0=n0+n1
    n1=p
    # print("{}/{}".format(n0,n1))
print(round)

