import random
random.seed(int(input()))
for i in range(5):
    for j in range(10):
        q=random.randint(1,5)
        if q==1:
            q=random.randint(0,9)
        elif q==2 or q==3:
            q=chr(random.randint(ord('A'),ord('Z')))
        else:
            q=chr(random.randint(ord('a'),ord('z')))
        print(q,end='')
    print()
