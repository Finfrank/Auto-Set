n=int(input())
num = []
for i in range(1,n):
    if n%i==0:
        num.append(i)
print(f"{n} 的真约数为: {num}")
print("是完数"if sum(num)==n else "不是完数")
# def iscomnum(num):
#     sumdivi = 0
#     ls = []
#     for i in range(1,num):
#         if num % i ==0:
#             ls.append(i)
#     if sum(ls) == num:
#         return ls, True
#     else:
#         return ls, False
    
# num = eval(input())
# res = iscomnum(num)
# print(num,'的真约数为:', res[0])
# print('是完数' if res[1] else '不是完数')

