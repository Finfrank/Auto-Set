l=list(map(eval,input().split(',')))
n=int(input())
print(f"{n} 共出现 {l.count(n)} 次")
print(f"10个数据的平均值为 {sum(l)/len(l)}")
print(f"10个数据的最大值为 {max(l)}")
print(f"10个数据的最小值为 {min(l)}")

