import sys
n=int(input())
l=[]
l1=[]
l2=[]
while True:
    l1 = sys.stdin.readline().strip().split('\t')
    if l1[0]=='end': break
    l.append(l1)
l2=(l[:n])
for ll in l2:
    ll[0]=int(eval(ll[0]))
    ll[1]=int(eval(ll[1]))
print(l2)
