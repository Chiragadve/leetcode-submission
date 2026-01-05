class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        int count = 0;

        for (auto num : nums) {
            mp[num]++;
        }

        for (auto num : nums) {
            int need = k - num;

            if (mp[num] <= 0)
                continue;

            if (num == need) {
                if (mp[num] >= 2) {
                    count++;
                    mp[num] -= 2;
                }
            } else {
                if (mp[need] > 0) {
                    mp[num]--;
                    mp[need]--;
                    count++;
                }
            }
        }
        return count;
    }
};