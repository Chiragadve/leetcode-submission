class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int maxcount = INT_MIN;
        int count = 0;

        for(int i = 0; i < n; i++) {
            count += nums[i];

            if(count > maxcount){
                maxcount = count;
            }

            if(count < 0) {
                count = 0;
            }
        }
    return maxcount;
    }
};