class Solution {
public:
    int countHillValley(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        
        for(int i = 1; i < n - 1; i++) {

            if(nums[i] == nums[i-1])
                {
                    continue;
                }
                
                int j = i+1;

                while(j < n && nums[i] == nums[j]) {
                    j++;
                }
                if(j == n) break;
            
            if(nums[i-1] < nums[i] && nums[j] < nums[i] || nums[i-1] > nums[i] && nums[i] < nums[j]){
                count++;
            }
        }

    return count;
    }
};