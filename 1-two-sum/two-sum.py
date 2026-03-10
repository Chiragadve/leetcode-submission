class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        dict = {}
        for i in range(len(nums)):
            compliment = target - nums[i]
            if compliment in dict:
                return [i,dict.get(compliment)]
            dict[nums[i]] = i

            
        
            
        