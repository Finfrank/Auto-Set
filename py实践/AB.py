n=int(input())
s=input()
i=0
j=0
maxx=0
ct=0
if len(s)==1:
    print(1)
else:
    while i<n-1:
        i+=1
        if s[j:i+1].count('BA')==0:
            maxx=max(maxx,i-j+1)
        elif s[j:i+1].count('BA')==1:
            ct+=1
            maxx=max(maxx,i-j+1)
            p=i-ct+1
        else:
            j=p
            ct=1
        if n-j<maxx:
            break
    if maxx==0:
        print(1)
    else:
        print(maxx)
