for i in range(1,20):
    for j in range(1,32):
        for k in range(3,277,3):
            if i+j+k==100 and i*5+j*3+k//3==100:
                print(i,j,k)
