s=input()
l={}
for i in s:
    if i.isdigit():
        print("ERROR")
        exit(0)
    l[i]=s.count(i)
print(l)
print(len(s))
l1=[]
for x,y in l.items():
    l1.append(x)
    if y==1:
        l1.append('-1')
    else:
        l1.append(y)
l3="".join('%s' %a for a in l1)
l3=l3.replace('-1','')
print(l3)
print(len(l3))


    

