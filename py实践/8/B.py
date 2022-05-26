import sys
n=int(input())
l=[]
l1=[]
l2=[]
while True:
    l1 = sys.stdin.readline().strip().split(',')
    if l1[0]=='end': break
    l.append(l1)
l.sort(key=lambda x:(x[n-1]))
for ll in l:
    print('\t'.join(ll))