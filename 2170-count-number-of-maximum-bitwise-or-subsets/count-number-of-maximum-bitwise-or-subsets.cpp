class Solution {
public:

    int countSubset(int idx, int currOr, vector<int> nums, int maxOr){
        if(idx == nums.size()) {
            if(currOr == maxOr){
                return 1;
            }
            return 0;
        }

        // take subset
        int takeCount = countSubset(idx+1, currOr | nums[idx],nums,maxOr);

        // skip subset
        int notTakeCount = countSubset(idx+1, currOr, nums, maxOr);

        return takeCount + notTakeCount;
    }

    int countMaxOrSubsets(vector<int>& nums) {
        int maxOr = 0;
        for(int &num : nums){
            maxOr |= num;
        }

        int currOr = 0;
        return countSubset(0, currOr, nums, maxOr);
    }
};