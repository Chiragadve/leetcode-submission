class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int leftsum = 0;
        int rightsum = 0;
        int totalsum = 0;

        for (auto x : nums) {
            totalsum += x;
        }

        for (int i = 0; i < nums.size(); i++) {
            rightsum = totalsum - leftsum - nums[i];

            if (leftsum == rightsum) {
                return i;
            }
            leftsum += nums[i];
        }
        return -1;
    }
};