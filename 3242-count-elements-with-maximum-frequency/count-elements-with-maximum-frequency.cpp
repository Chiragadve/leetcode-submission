class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int> freq;

        for(auto x : nums){
            freq[x]++;
        }

        int maxp = INT_MIN;

        for(auto &pair : freq){
            maxp = max(pair.second,maxp);
        }
        int count = 0;
        for(auto &pair : freq) {
            if(pair.second == maxp){
                count++;
            }
        }
    return maxp * count;
    }
};