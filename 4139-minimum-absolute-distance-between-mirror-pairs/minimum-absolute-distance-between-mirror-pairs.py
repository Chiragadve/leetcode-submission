class Solution:
    def minMirrorPairDistance(self, nums: List[int]) -> int:
        map = {}
        ans = float('inf')

        for i in range(len(nums)):
            if nums[i] in map:
                ans = min(ans, i - map[nums[i]])
            
            s = str(nums[i])
            lst = list(s)
            lst.reverse()

            reversed_val = int("".join(lst))
            map[reversed_val] = i
        
        return ans if ans != float('inf') else -1 
        
