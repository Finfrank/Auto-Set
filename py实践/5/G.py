n=float(input())
if n<0:
    print('error')
else:
    if n==0:
        s=0
    else:
        n=n-5000
        if n<=3000:
            s=n*0.03
        elif 3000<n<=12000:
            s=n*0.1-210
        elif 12000<n<=25000:
            s=n*0.2
            s-=1410
        elif 25000<n<=35000:
            s=n*0.25
            s-=2660
        elif 35000<n<=55000:
            s=n*0.3
            s-=4410
        elif 55000<n<=80000:
            s=n*0.35
            s-=7160
        else:
            s=n*0.45
            s-=15160
        n=n-s+5000
    print("应缴税款{:.2f}元，实发工资{:.2f}元。".format(s,n))