""" int is_prime(int n)
{
    if(n<=1) return 0;
    int m=floor(sqrt(n)+0.5);//floor向下取整 ceil向上取整 
    for(int i=2;i<=m;i++)
    if(n%i==0) return 0;
    return 1;
} """
def isPrime(n):          
    for i in range(2,int(n**0.5)+1):
        if n%i==0:
            return 0
    return 1
n= int(input())
for j in range(2,n):
    if isPrime(j)==1:
        print(j,end=' ')

        