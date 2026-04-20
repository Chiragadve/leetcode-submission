class Solution:
    def maxDistance(self, colors: List[int]) -> int:
        n = len(colors)
        result = 0

        i = 0
        while colors[i] == colors[n - 1]:
            i += 1
        result = max(result, abs((n - 1) - i))

        j = n - 1
        while colors[j] == colors[0]:
            j -= 1
        result = max(result, j)

        return result
