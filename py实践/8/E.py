import sys
n=int(input())
l=[]
l1=[]
l2=[]
s=''
i=0
while True:
    p=sys.stdin.readline().strip()
    if p =='end': break
    if i<n:
        s+=p
        i+=1
print(len(s))
print(len(set(s)))