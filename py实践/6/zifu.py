n=int(input())
l3=[]
l3=list(l3)
for i in range(n):
    l2=[]
    s=input().split()
    s0=list(s[0])
    for x in range(len(s0)):
        for p in range(4,11):
            s0[p]='*'
    l2.append(''.join(s0))
    s1=list(s[1])
    s1[1]="*"
    l2.append(''.join(s1))
    s3=list(s[2])
    for x in range(len(s3)):
        for p in range(3,7):
            s3[p]="*"
    l2.append(''.join(s3))
    l3.append(l2)
if n<=0:
    print("ERROR")
else:
    print(l3)


