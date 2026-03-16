class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        minPrice = float('inf')
        maxProfit = 0

        for i in range(len(prices)):
            minPrice = min(prices[i],minPrice)
            currProfit = prices[i] - minPrice
            maxProfit = max(currProfit,maxProfit)
        return maxProfit