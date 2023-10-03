n, m, k=map(int, input().split())
hm={}
# for i in range(m):
#     x, y=map(int, input().split())
#     x, y=min(x, y), max(x, y)
#     if x in hm:
#         hm[x].append(y)
#     else:
#         hm[x]=[y]
# vis=[0]*(n+1)
# if 1 in hm:
#     if(n-len(hm)<k):
#         print("impossible")

k = 2
n = 5
mat = [[0, 0, 0, 0, 0, 0],
       [0, 0, 1, 0, 1, 0],
       [0, 1, 0, 1, 0, 0],
       [0, 0, 1, 0, 0, 0],
       [0, 1, 1, 0, 0, 0],
       [0, 0, 0, 0, 0, 0]]

vis = mat[0]

from collections import deque

q = deque()
vis[1] = 1
q.append(1)
