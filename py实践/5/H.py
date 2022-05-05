n=eval(input())
if n<=0 or isinstance(n,int)==0:
    print('ERROR')
    exit(0)
ans=0
while n!=1 :
    print(int(n),end=' ')
    if n%2==0:
        ans+=1
        n/=2
    elif n>1:
        ans+=1
        n=n*3+1
print(1)
print(ans)



