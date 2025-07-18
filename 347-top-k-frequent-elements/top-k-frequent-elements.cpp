class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map <int,int> freq;

        for(auto val: nums){
            freq[val]++;
        }

        priority_queue<pair<int,int>> MaxHeap;
        vector <int> Kelement;

        for(auto pair : freq){
            MaxHeap.push({pair.second,pair.first});
        }

        while(k--) {
            Kelement.push_back(MaxHeap.top().second);
            MaxHeap.pop();
        }
        return Kelement;
    }
};