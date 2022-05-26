# n=int(input())

# ls=[]

# ls1=[]

# ls2=[]

# ls3=[]

# a=s=d=j=g=h=0



# with open('成绩单.csv','r',encoding='utf-8') as f:

#     for line in f:

#         ls.append(line.strip().split(','))

#     ls.sort(key=lambda x:int(x[-1]))

#     print('最低分{}分,最高分{}分'.format(ls[0][-1],ls[-1][-1]))

#     for i in range(len(ls)):

#         a+=int(ls[i][3])

#         s += int(ls[i][4])

#         d += int(ls[i][5])

#         j += int(ls[i][6])

#         g += int(ls[i][7])

#         h += int(ls[i][8])

#     if n>len(ls):

#         print(ls)

#     else:

#         print(ls[0:n])

#     print(ls[-n:])

#     ls2.extend([float('{:.2f}'.format(a/(len(ls)))),float('{:.2f}'.format(s/(len(ls)))),float('{:.2f}'.format(d/(len(ls)))),float('{:.2f}'.format(j/(len(ls)))),float('{:.2f}'.format(g/(len(ls)))),float('{:.2f}'.format(h/(len(ls))))])

#     print(ls2)
import sys
n=int(input())
l=[]
l1=[]
l2=[]
while True:
    l1 = sys.stdin.readline().strip().split(',')
    if l1[0]=='end': break
    l.append(l1)
l.sort(key=lambda x:int(x[-1]))
print(f'最低分{l[0][-1]}分,最高分{l[-1][-1]}分')
print(l[0:n])
print(l[-n:])
a=b=c=d=e=f=0
for i in range(len(l)):
    a+=int(l[i][3])
    b+=int(l[i][4])
    c+=int(l[i][5])
    d+=int(l[i][6])
    e+=int(l[i][7])
    f+=int(l[i][8])
le=len(l)
l2.extend([float('{:.2f}'.format(a/le)),float('{:.2f}'.format(b/le)),float('{:.2f}'.format(c/le)),float('{:.2f}'.format(d/le)),float('{:.2f}'.format(e/le)),float('{:.2f}'.format(f/le))])
print(l2)

    
    