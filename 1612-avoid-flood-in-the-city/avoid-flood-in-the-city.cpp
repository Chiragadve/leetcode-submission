class Solution {
public:
    vector<int> avoidFlood(vector<int>& rains) {
        unordered_map<int,int> full;
        vector<int> ans(rains.size(),1);
        set<int> dryDays; 

        for(int i = 0; i < rains.size(); i++){
            if(rains[i] == 0){
                dryDays.insert(i);
            }else{
                int lake = rains[i];
                if(full.count(lake)){
                    auto it = dryDays.upper_bound(full[lake]);
                    if(it == dryDays.end()) return {};
                    ans[*it] = lake;
                    dryDays.erase(it);
                }
                full[lake] = i;
                ans[i] = -1;
            }
        }
    return ans;
    }
};