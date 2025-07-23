class Solution {
public:
    char repeatedCharacter(string s) {
        unordered_set<char>seen;
        for(char val : s){
            if(seen.count(val)){
                return val;
            }
            seen.insert(val);
        }
    return '\0';
    }
};