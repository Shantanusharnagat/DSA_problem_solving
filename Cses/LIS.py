n=int(input())
a=list(map(int, input().split()))

dp=[1]*(n+1)
dp[0]=1
ans=0
for i in range(1, n):
    for j in range(i-1, -1, -1):
        if(a[j]<a[i]):
            dp[i]=max(dp[i], 1+dp[j])
    ans=max(ans, dp[i])
print(ans)    