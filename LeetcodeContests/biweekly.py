
nums=[2,3,3,2,2,4,2,3,4]
hm={}
for i in nums:
    if i in hm:
        hm[i]+=1
    else:
        hm[i]=1
ans=0
# There are two types of operations that you can apply on the array any number of times:
# Choose two elements with equal values and delete them from the array.
# Choose three elements with equal values and delete them from the array.
# Return the minimum number of operations required to make the array empty, or -1 if it is not possible.
for i in hm:
    if hm[i]%2==0:
        ans+=hm[i]//2
    elif hm[i]%2==1:
        ans+=hm[i]//2
        hm[i]=1
for i in hm:
    if hm[i]==1:
        ans+=1
        break 
print(ans)    
            
                
            