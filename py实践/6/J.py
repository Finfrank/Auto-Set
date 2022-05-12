l=list(map(eval,input().split(',')))
print(f"倒序排序后为： {l[::-1]}")
l.sort()
print(f"按从小到大的顺序为： {l}")
print(f"按从大到小的顺序为： {l[::-1]}")

