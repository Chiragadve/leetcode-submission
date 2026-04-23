class Solution:
    def distance(self, nums: List[int]) -> List[int]:
        n = len(nums)
        # Initialize the output array with zeros
        arr = [0] * n
        
        # Use defaultdict to avoid KeyErrors on the first encounter of a number
        indexSum = defaultdict(int)
        indexCount = defaultdict(int)

        # Pass 1: Left to Right
        for i in range(n):
            num = nums[i]
            freq = indexCount[num]
            current_sum = indexSum[num]

            # Calculate distance from current index to all previous identical numbers
            arr[i] += freq * i - current_sum
            
            indexCount[num] += 1
            indexSum[num] += i

        # Clear maps for the second pass
        indexSum.clear()
        indexCount.clear()

        # Pass 2: Right to Left
        for i in range(n - 1, -1, -1):
            num = nums[i]
            freq = indexCount[num]
            current_sum = indexSum[num]

            # Calculate distance from current index to all future identical numbers
            arr[i] += current_sum - freq * i
            
            indexCount[num] += 1
            indexSum[num] += i

        return arr