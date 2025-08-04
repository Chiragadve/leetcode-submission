class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int i = 0, j = 0;
        int count = 0;
        int n = fruits.size();
        unordered_map<int,int>mp;

        while(j < n){
            mp[fruits[j]]++;
            if(mp.size() <= 2){
                count = max(count,j-i+1);
            }else{
                mp[fruits[i]]--;
                if(mp[fruits[i]]==0){
                    mp.erase(fruits[i]);
                }
            i++;
            }
        j++;
        }
    return count;
    }
};