#we maintain start and end pointers to keep track of the window
#we make use of sliding window technique
#we maintain a window of size ans and keep on increasing it till the sum <= k
#when sum>k we start removing elements from the start of the window till sum<=k
#we keep on doing this till the end of the array

for z in range(int(input())):
    n, k=map(int, input().split())
    a=list(map(int, input().split()))
    h=list(map(int, input().split()))

    start=0
    end=0
    sum=0
    ans=0
    while(end<n):
        if end>0 and h[end-1]%h[end]!=0:
            sum=0
            start=end
        sum+=a[end]
        while(start<=end and sum>k):
            sum-=a[start]
            start+=1
        end+=1
        ans=max(ans, end-start)
    print(ans)
        

