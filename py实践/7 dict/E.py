f=eval(input())
s=input().split()
for i in s:
    f[i]=f.get(i,0)+1
print(f)