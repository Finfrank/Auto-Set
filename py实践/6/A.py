a=list(map(int,input().split()))
l=len(a)
tar=int(input())
for i in range(0,l):
    for j in range(i+1,l):
        if a[i]+a[j]==tar:
            print(i,j)
            exit(0)
print('Fail')  
