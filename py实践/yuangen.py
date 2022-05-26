from marshal import version
import math
def j(a,b,n):
    q=1
    while(q<=n and b**q%a!=1):
        q+=1
    return q
def ksm(a,b,n):
    res =1
    while b:
        if b%2:
            res=(res*a)%n
        a=(a*a)%n
        b>>=1
    return res
while True:
    n=int(input())
    for i in range(2,n-1):
        if j(i,(n-1)>>1,n)==n:
            print(i)
            break
# def multimod(a,k,n):    #快速幂取模
#     ans=1
#     while(k!=0):
#         if k%2:         #奇数
#             ans=(ans%n)*(a%n)%n
#         a=(a%n)*(a%n)%n
#         k=k//2          #整除2
#     return ans
# def yg(n):		# 这样默认求最小原根
#     k=(n-1)//2
#     for i in range(2,n-1):
#         if multimod(i,k,n)!=1:
#             return i
# n= int(input())
# print(yg(n))




