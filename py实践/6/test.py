def isprime(n):
    for i in range(2,int(n**0.5)+1):
        if n % i ==0:
            return False
    return True
n=int(input())
p=n
l=[]
s=1
for i in range(2,n):
    while int(p%i)==0:
        p=int(p/i)
        l.append(i)
    if p==1:
        break
print(l)

