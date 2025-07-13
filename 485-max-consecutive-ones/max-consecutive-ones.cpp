class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {

        if(nums.empty()) return 0;

        int count = 0;
        int maxones = 0;
        for(int i = 0; i < nums.size(); i++) {
           if(nums[i] == 1){
                count++;
                maxones = max(maxones,count);
           }
           if(nums[i] != 1){
                count = 0;
           }
        }
    return maxones;
    }
};