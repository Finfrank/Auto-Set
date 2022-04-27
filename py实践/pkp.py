g = [input().split() for _ in range (13)]

cvt = {'0':10, 'A': 1, 'J': 11, 'Q':12, 'K': 13}
for i in range(2, 10):
    cvt[str(i)] = i
g = [[]] + [[cvt[c] for c in line] for line in g]

cnt = {}
idx = 13
while cnt.get(13, 0) < 4:
    if idx == 13:
        idx = g[13].pop(0)
    else:
        idx = g[idx].pop()
    cnt[idx] = cnt.get(idx, 0) + 1

res = 0
for k, v in cnt.items():
    if k != 13:
        res += v == 4
print(res)