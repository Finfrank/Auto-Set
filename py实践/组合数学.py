""" n=int(input())
if n==0:
    print(1)
n=n+1
s=1
for i in range(1,n+1):
    s=s*(4*i-2)//(i+1)
print(int(s))
 """
from math import factorial as f

def c(n,m):
    return f(n)//(f(m)*f(n-m))

def kat(n):
    return c(2*n,n)//(n+1)

print(kat(int(input())+1))