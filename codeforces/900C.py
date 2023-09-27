for i in range(int(input())):
    n, k, x=map(int, input().split())
    if x>=k*(k+1)//2 and x<=k*n-(k*(k-1)//2):
        print("YES")
    else:
        print("NO")