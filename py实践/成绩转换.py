# while True:
#     try:
# #         a=int(input())
# #     except:
# #         break
# #     else:
# #         l1.append(a)
# # for i in l1:
#多组输入
while True:
    try:
        a=eval(input())
        if a>=90 and a<=100:
            print("A")
        elif a>=80 and a<=89:
            print("B")
        elif a>=70 and a<=79:
            print("C")
        elif a>=60 and a<=69:
            print("D")
        elif a<=59:
            print("E")
        else:
            print("Score is error!")
    except:
        break
