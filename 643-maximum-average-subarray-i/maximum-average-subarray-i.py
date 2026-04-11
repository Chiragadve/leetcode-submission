class Solution:
    def findMaxAverage(self, nums: List[int], k: int) -> float:
        i = 0
        j = 0
        max_sum = -float('inf')
        current_sum = 0
        
        while j < len(nums):
            current_sum += nums[j]

            if (j - i + 1) == k:
                max_sum = max(max_sum, current_sum)
                current_sum -= nums[i]
                i += 1
            j+= 1
        return max_sum / k



