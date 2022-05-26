import sys
n=int(input())
l=[]
l1=[]
l2=[]
s = 'abcdefghijklmnopqrstuvwxyz'
while True:
    l1 = sys.stdin.readline().strip().split()
    if l1[0]=='end': break
    l.append(l1)
st=' '.join('%s' %d for d in l[:n])
l2=[[x,st.lower().count(x)] for x in s]
l2.sort(key =lambda x:(-x[1],x[0]))
for i in l2:
    print('{} 的数量是 {:>3} 个'.format(i[0],i[1]))

    # for char in 'abcdefghijklmnopqrstuvwxyz':
    #     l2.append(st.count(char))
# print(l2)
    # l.append(l1)
