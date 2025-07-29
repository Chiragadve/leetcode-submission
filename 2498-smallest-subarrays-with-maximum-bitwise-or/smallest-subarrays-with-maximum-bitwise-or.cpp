class Solution {
public:
    vector<int> smallestSubarrays(vector<int>& nums) {

        int n = nums.size();
        vector<int> ans(n,0);
        vector<int> last(32,-1);

        for(int i = n - 1; i >= 0; i--){
            int num = nums[i];

            for(int b = 0; b < 32; b++){
                if((num >> b) & 1){
                    last[b] = i;
                }
            }

            int furthest = i;
            for(int b = 0; b < 32; b++) {
                if(last[b] != -1){
                    furthest = max(furthest,last[b]);
                }
            }

         ans[i] = furthest - i + 1;
        }
    return ans;
    }
};