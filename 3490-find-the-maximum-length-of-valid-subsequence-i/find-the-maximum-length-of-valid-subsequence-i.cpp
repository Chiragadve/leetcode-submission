class Solution {
public:
    int maximumLength(vector<int>& nums) {
        int evenCount= 0;
        int oddCount =0;
 
        for(int &num : nums){
            if(num % 2 == 0){
                evenCount++;
            }
            else{
                oddCount++;
            }
        }

        int parity = nums[0] % 2;
        int alternating = 1;

        for(int i = 0; i < nums.size(); i++) {
            int currentParity = nums[i]%2;

            if(parity != currentParity) {
                alternating++;
                parity = currentParity;
            }
        }
        return max({oddCount,evenCount,alternating});
    }
};