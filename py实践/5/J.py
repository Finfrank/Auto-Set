# 求数列之和
def sum(a,n):
    s=""
    sm=0
    for i in range(n):
        s+=str(a)
        sm+=eval(s)
    print(sm)
a,n=map(int,input().split())
sum(a,n)
     
