n, m, k=map(int, input().split())
hm={}
for i in range(m):
    x, y=map(int, input().split())
    x, y=min(x, y), max(x, y)
    if x in hm:
        hm[x].append(y)
    else:
        hm[x]=[y]
if 1 not in hm:
    print("possible")
    exit()
if n-len(hm[1])>=k:
    print("possible")
else:
    print("impossible")
