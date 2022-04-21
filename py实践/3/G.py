from functools import reduce
import math
n=int(input())
s=0
""" s=0
s+=(reduce(lambda x,y:x*y,range(1,i+1))) """
for i in range(1,n+1):
    a=math.factorial(i)
    s+=a
print(s)
