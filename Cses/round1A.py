for i in range(int(input())):
    n=int(input())
    a=list(map(int, input().split()))

    a.sort()
    if n==5:
        ans=(a[n-1]+a[n-2]+a[n-3])/3-(a[0]+a[1])/2
    else:
        ans=(a[n-1]+a[n-2])/2-(a[0]+a[1])/2
    print("Case #"+ str(i+1)+": " + str(ans))   