s=1.0
for i in range(1,366):
    if i % 11 ==0:
        s*=0.999
    else:
        s*=1.001
print("365天后该同学的能力是{:.6f}".format(s))
""" print("365天后该同学的能力是1.348264") """