class Solution:
    def maximalNetworkRank(self, n: int, roads: List[List[int]]) -> int:
        hm={}
        rev={}
        for i in roads:
            if i[0] not in hm:
                hm[i[0]]=[i[1]]
            else:
                hm[i[0]].append(i[1])
            if i[1] not in rev:
                rev[i[1]]=[i[0]]
            else:
                rev[i[1]].append(i[0])
        maxi=float("-inf")
        print(hm)
        print(rev)
        res=[]
        for i in range(n):
            siz=0
            if i in hm:
                siz+=len(hm[i])
            if i in rev:
                siz+=len(rev[i])
            res.append(siz)
        first=[-10e9, 0]
        second=[-10e9, 0]
        for i in range(n):
            if res[i]>first[0]:                
                first=[res[i], i]                
            elif res[i]>second[0]:                
                second=[res[i], i]
        print(first, second)
        
        if (first[1] in hm and second[1] in hm[first[1]]) or (first[1] in rev and second[1] in rev[first[1]])  :
            return first[0]+second[0]-1
        else:
            return first[0]+second[0]


        return 0
        #return maxi
            

