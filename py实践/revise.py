s=[1,2,3,4,5,6,7,8]
print(s[:1])
s[:1]=[]

s[:2]='a'
print(s)
s[2:]='b'
print(s[1:])

s[2:3]=['x','y']

del s[:1]

print(s)