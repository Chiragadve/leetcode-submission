class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> stringmap;

        for(char val : s){
            stringmap[val]++;
        }
        
        for(char val : t){
            stringmap[val]--;
        }

        for(auto it : stringmap){
            if(it.second != 0){
                return false;
            }
        }
    return true;
    }
};