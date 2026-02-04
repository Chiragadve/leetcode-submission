class Solution {
    public int findMaxConsecutiveOnes(int[] nums) {
        int max = 0;
        int currentcount = 0;

        for (int i = 0; i < nums.length; i++) {
            if (nums[i] == 1) {
                currentcount++;
            } else {
                currentcount = 0;
            }
            max = Math.max(max, currentcount);
        }
        return max;
    }
}