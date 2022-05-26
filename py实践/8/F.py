import sys
name=input()
s=[]
l=[]
while True:
    s= sys.stdin.readline().strip().split(',')
    if s[0]=='end':break
    l.append(s)
# print(l)
if name in l[0]:
    for c in l[1:]:
        if name == c[0]:
            print(c[1:])
else:
    for c in l[1:]:
        if name in c:
            print(c[0])