class Solution:
    def intersection(self, nums1: List[int], nums2: List[int]) -> List[int]:
        s = set(nums1)
        nums = []
    
        for num in nums2:
            if num in s:
                nums.append(num)
                s.discard(num)
        return nums     