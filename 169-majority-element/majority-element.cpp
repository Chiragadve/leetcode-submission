class Solution {
public:
    int majorityElement(vector<int>& nums) {

        unordered_map<int,int> frequency_map;

        for(auto num : nums){
            frequency_map[num]++;
        }

        int maxFreq = 0;
        int keywithMax;

        for(auto pair : frequency_map){
            if(pair.second > maxFreq) {
                maxFreq = pair.second;
                keywithMax = pair.first;
            }
        }
    return keywithMax;
    }
};