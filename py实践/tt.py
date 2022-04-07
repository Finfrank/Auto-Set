import math
def distance(x,y,z):
    d=math.sqrt(float(x**2)+float(y**2)+float(z**2))
    return d
x,y,z=input().split(",")
d=distance(float(x),float(y),float(z))
print("{:.2f}".format(d))