import numpy as np 
from scipy import linalg
n=int(input())
a=[[0]*n for i in range(n)]
count=0
while count !=n:
    s_list = (input().split())
    for i in range(n):
        a[count][i] = int(s_list.pop(0))
    count += 1
""" list=[]
for i in range(n):
    s_list=(input()).split()
    for j in range(n):
        list.append(int(s_list.pop(0)))
a = np.reshape(list,(n,n)) """
h=np.linalg.det(a)
print(h)



