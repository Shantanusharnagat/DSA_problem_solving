# Link: https://codeforces.com/contest/1878/problem/C
#approach:
# 1. check if x is in the range of k*(k+1)/2 and k*n-(k*(k-1)/2)
# 2. if yes then print YES else NO


for i in range(int(input())):
    n, k, x=map(int, input().split())
    if x>=k*(k+1)//2 and x<=k*n-(k*(k-1)//2):
        print("YES")
    else:
        print("NO")