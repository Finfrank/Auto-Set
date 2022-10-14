import math
from webbrowser import get
def getCircleArea(r):
    area=3.1415926*r*r
    return area
n=int(input())
for i in range(n):
    r=float(input())
    print(f'{getCircleArea(r):.2f}')
print('END.')
