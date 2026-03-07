class Solution:
    def intersect(self, nums1: List[int], nums2: List[int]) -> List[int]:
        map = {}
        result = []

        for num in nums1:
            map[num] = map.get(num,0) + 1

        for i in range(len(nums2)):
            num = nums2[i]
            if(num in map and map.get(num) > 0):
                result.append(num)
                freq = map.get(num) - 1
                if freq == 0:
                    map.pop(num)
                else:
                    map[num] = freq
        return result
        



        