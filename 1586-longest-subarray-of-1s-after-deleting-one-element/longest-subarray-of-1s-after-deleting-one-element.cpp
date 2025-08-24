class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int zerocount = 0;
        int i = 0, result = 0;

        for (int j = 0; j < nums.size(); j++) {
            if (nums[j] == 0) zerocount++;

            // shrink window until at most 1 zero
            while (zerocount > 1) {
                if (nums[i] == 0) zerocount--;
                i++;
            }

            // length of window minus 1 (delete one element)
            result = max(result, j - i);
        }

        return result;
    }
};