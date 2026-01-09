class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int> mp;

        for(auto x : nums){
            mp[x]++;
        }

        for(auto& pair : mp){
            if(pair.second == 1){
                return pair.first;
            }
        }
    return 0;
    }
};