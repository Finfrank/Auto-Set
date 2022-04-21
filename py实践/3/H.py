for i in range(100):
    for j in range(100):
        for k in range(100):
            if i+j+9*k==100 and 2*i+4*j+2*k==100:
                print("鸡的数量是: %d"%i)
                print("狗的数量是: %d"%j)
                print("九头鸟的数量是: %d"%k)