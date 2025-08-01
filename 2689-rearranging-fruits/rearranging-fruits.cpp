class Solution {
public:
    long long minCost(vector<int>& basket1, vector<int>& basket2) {
        unordered_map<int,int> mp;
        int minEl = INT_MAX;

        for(int &x : basket1){
            mp[x]++;
            minEl = min(minEl,x);
        }

        for(int &x : basket2){
            mp[x]--;
            minEl = min(minEl,x);
        }

        vector<int> FinalList;

        for(auto &it : mp){
            int cost = it.first;
            int count = it.second;

            if(count == 0){
                continue;
            }

            if(count %2 != 0){
                return -1;
            }

            for(int c = 1; c <= abs(count)/2; c++){
                FinalList.push_back(cost);
            }
        }

        sort(FinalList.begin(),FinalList.end());

        long long result = 0;

        for(int i = 0; i < FinalList.size()/2; i++) {
            result += min(FinalList[i],minEl*2);
        }
    return result;
    }
};