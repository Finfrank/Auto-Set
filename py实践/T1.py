L=['A','B','C']
L=list(L)
print(max(L))
for i in L:
    print('Hello,',i,'!')
for x in range(0,len(L)):
    print("Hello,{}!".format(L[x]))
for name in L:
    print("Hello,%s!"%name)