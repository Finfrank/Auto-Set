n=int(input())
s=""
if n==0:
    print(0)
else:
    while n > 0: 
        x=n%2
        n//=2
        s+=str(x)   
    print(s[::-1])

