#This is no of islands problem from leetcode
#Time Complexity: O(m*n)
#Space Complexity: O(m*n)
#Approach: BFS
#BFS is used to traverse the graph and count the number of islands.
#We use a queue to store the indices of the grid and traverse the grid using BFS.
#We use a visited array to keep track of the visited nodes. can be optimized by using the grid itself.
#We use a directions array to traverse the grid in all 4 directions.
#We increment the count whenever we encounter a 1 and traverse the grid using BFS.
#We mark the visited nodes as 0 and continue the process.
#We return the count at the end.



from collections import deque
class Solution:
    def numIslands(self, grid: List[List[str]]) -> int:
        visited=[]
        m=len(grid)
        n=len(grid[0])
        for i in range(m):
            visited.append([0]*(n+1))
        print(visited)
        q=deque()
        count=0
        directions=[[1, 0], [-1, 0], [0, -1], [0, 1]]
        for i in range(m):
            for j in range(n):
                if grid[i][j]=="1":
                    count+=1
                    q.append([i, j])
                    while q:
                        r, c=q.popleft()
                        grid[r][c]="0"
                        for dr, dc in directions:
                            row=dr+r
                            col=dc+c
                            if row<0 or row>=m or col<0 or col>=n or grid[row][col]=="0":
                                continue
                            q.append([row, col])
                            grid[row][col]="0"

        return count