import math
def getCircleArea(r):
    area=3.1415926*r*r
    return area
n=int(input())
for i in range(n):
    r=float(input())
    print(round(getCircleArea(r),2))
print('END.')
