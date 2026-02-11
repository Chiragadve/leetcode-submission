class Solution {
    public int maxProfit(int[] prices) {
        int minPrice = Integer.MAX_VALUE;
        int maxProfit = 0;

        for(int i = 0; i < prices.length; i++){
            minPrice = Math.min(prices[i],minPrice);
            int currProfit = prices[i] - minPrice;
            maxProfit = Math.max(currProfit,maxProfit);
        }
    return maxProfit;
    }
}