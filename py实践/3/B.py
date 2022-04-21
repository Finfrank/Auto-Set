import random
n=int(input())
random.seed(n)
for i in range(10):
    a=random.randint(0,999)
    print("{}".format(a),end="")
