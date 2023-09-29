class Solution:
    def successfulPairs(self, spells: List[int], potions: List[int], success: int) -> List[int]:
        potions = sorted(potions)
        res = []
        n = len(potions)
        for i in spells:
            count = 0
            l = 0
            h = n - 1
            if potions[h] * i < success:
                res.append(0)
                continue 
            while l <= h:
                mid = (l + h) // 2
                if potions[mid] * i >= success:
                    h = mid - 1 
                else:
                    l = mid + 1
            res.append(n - l)  
        return res
