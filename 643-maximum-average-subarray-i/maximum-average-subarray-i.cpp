class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double maxcount = 0;
        double initial = 0;
        if (nums.size() <= k) {
            for (auto num : nums) {
                maxcount += num;
            }
        }

        for (int i = 0; i < k; i++) {
            initial += nums[i];
        }

        maxcount = initial;

        for (int i = k; i < nums.size(); i++) {
            initial = initial - nums[i - k] + nums[i];
            maxcount = max(initial, maxcount);
        }

        return maxcount / k;
    }
};