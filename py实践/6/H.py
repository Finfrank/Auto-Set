l=eval(input())
for ll in l:
    for i,x in enumerate(ll):
        try:
            ll[i]=eval('{:g}'.format(eval(x)))
        except:
            ll[i]=x
print(l)