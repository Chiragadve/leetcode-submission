class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        dict = {}
        for i in range(len(nums)):
            key = target - nums[i]
            if key in dict:
                return [i,dict.get(key)]
            dict[nums[i]] = i
            


        