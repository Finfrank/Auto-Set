s=input()
w=0
n=0
q=0
k=0
for i in range(len(s)):
    if s[i].isalpha():
        w+=1
    elif s[i].isspace():
        k+=1
    elif s[i].isdigit():
        n+=1
    else:
        q+=1
print("英文字母 {} 个， 数字 {} 个".format(w,n))
print("其他字符 {} 个， 空格 {} 个".format(q,k))


        