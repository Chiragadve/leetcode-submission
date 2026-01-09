class Solution {
public:
    bool closeStrings(string word1, string word2) {
        unordered_map<char,int> mp1;
        unordered_map<char,int> mp2;
        vector<int> v1,v2;
        if(word1.length() != word2.length()) return false;
        
        for(auto x : word1){
            mp1[x]++;
        }

        for(auto x : word2){
            mp2[x]++;
        }

        if(mp1.size() != mp2.size()) return false;
        for(auto &p : mp1){
            if(!mp2.count(p.first)) return false;
        }

        for(auto &pair : mp1){
            v1.push_back(pair.second);
        }

        for(auto &pair : mp2){
            v2.push_back(pair.second);
        }

        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());

    return (v1 == v2) ? true : false;
    }
};