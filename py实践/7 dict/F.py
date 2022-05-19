dict1 = {'赵广辉': '13299887777', '特朗普': '814666888', '普京': '522888666', '吴京': '13999887777'}
name=input()
p=0
if name in dict1:
    print(f"{name}:{dict1[name]}")
else:
    print("数据不存在")


    