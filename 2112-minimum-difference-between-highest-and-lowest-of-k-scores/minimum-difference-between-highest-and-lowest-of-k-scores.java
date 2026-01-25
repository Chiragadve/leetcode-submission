class Solution {
    public int minimumDifference(int[] nums, int k) {
        if(k == 1) return 0;
        int n = nums.length;

        Arrays.sort(nums);
        int mini = Integer.MAX_VALUE;
        for(int i = k - 1; i < n; i++){
            mini = Math.min(mini,nums[i] - nums[i - k + 1]);
        }

    return mini;
    }
}