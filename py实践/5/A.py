def f(s,n):
    if s==" ":
        return s
    else:
        if n>=0:
            return s[(len(s)-n)%len(s):]+s[:(len(s)-n)%len(s)]
        else:
            return s[abs(n)%len(s):]+s[:abs(n)%len(s)]
s=input()
n=int(input())
print(f(s,n))