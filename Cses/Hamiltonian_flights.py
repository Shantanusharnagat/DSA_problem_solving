n, m=map(int, input().split())
g=[[] for i in range(n+1)]
for i in range(m):
    a, b=map(int, input().split())
    g[a].append(b)
print(g)

    