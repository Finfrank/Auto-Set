l=list(map(int,input().split()))
n=int(input())
if l.count(n):
    print('Fail')
    print(l)
else:
    l.append(n)
    l.sort()
    print(l.index(n))
    print(l)
