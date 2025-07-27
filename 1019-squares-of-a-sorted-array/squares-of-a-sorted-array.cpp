class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        int j = 0;
        int k = n - 1;
        int val;
        vector<int>result(n);
        for(int i = n - 1; i >= 0; i--) {
            if(abs(nums[k]) > abs(nums[j])){
                result[i] = nums[k] * nums[k];
                k--;
            }
            else{
                result[i] = nums[j] * nums[j];
                j++;
            }
        }
    return result;
    }
};