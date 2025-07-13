class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map <int,int> num_frequency;
        int n = nums.size();

        for(auto num : nums) {
            num_frequency[num]++;
        }
        
        vector<int> nfreq;

        for(auto pair : num_frequency){
            if(pair.second > n/3){
                nfreq.push_back(pair.first);
            } 
        }
    return nfreq;
    }
};