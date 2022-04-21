import math
n = int(input())
for p in range(n):
    a,b=map(int,input().split())
    print(math.gcd(a,b))
