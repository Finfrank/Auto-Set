""" """ """ 
import math
n= eval(input())
if n == 0:
    res=0
else:
    a,x0=float(n),float(n)
    while True:
        xi=0.5*(x0+a/x0)
        if abs(x0-xi)<1e-4:
            break
        x0=xi
    res=x0
print(res) 
"""
n=eval(input())
r=n
while abs(r*r-n)>1e-4:
    r=(r+n/r)/2
print(r)