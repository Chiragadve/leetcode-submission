class Solution {
public:
    bool result;
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_set <int> window;
        for(int i = 0; i < nums.size(); i++) {
            if(window.count(nums[i])) return true;

            window.insert(nums[i]);

            if(window.size() > k) {
                window.erase(nums[i-k]);
            }
        }
        return false;
    }
};