def f(n,s,nm='宝马'):
    print(f"这是一辆{n}年生产，型号是{s}的{nm}牌汽车。")
l=input().split()
f(*l)