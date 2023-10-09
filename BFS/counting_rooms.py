# from collections import deque
# m, n=map(int, input().split())
# grid=[list(input()) for _ in range(m)]

# count=0
# vis=set()
# q=deque()
# directions=[[1, 0], [-1, 0], [0, 1], [0, -1]]
# for i in range(m):
#     for j in range(n):
#         if grid[i][j]=='.':
#             count+=1
#             q.append([i, j])
#             while(q):
#                 r, c=q.popleft()
                
#                 grid[r][c]='#'
#                 for dr, dc in directions:
#                     row=r+dr
#                     col=c+dc
#                     if row<0 or col<0 or row>=m or col>=n or grid[row][col]!='.':
#                         continue
#                     q.append([row, col])
#                     grid[row][col]='#'
                    
# print(count)



