def isPrime(n):
    if n<=1 :
        return 0
    else:
        for i in range(2,int(n**0.5)+1):
            if n % i==0:
                return 0
        return 1
for i in range(100,200):
    if isPrime(i):
        print(i,end=' ')