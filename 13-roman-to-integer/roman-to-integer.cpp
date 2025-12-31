class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> mp;
        mp['I'] = 1;
        mp['V'] = 5;
        mp['X'] = 10;
        mp['L'] = 50;
        mp['C'] = 100;
        mp['D'] = 500;
        mp['M'] = 1000;

        int counter = 0;
        int n = s.length();
        for (int i = 0; i < n; i++) {
            int current = mp[s[i]];
            int next = (i+1 < n) ? mp[s[i+1]] : 0;

            if(current < next){
                counter-=current;
            }
            else{
                counter+=current;
            }
        }
        return counter;
    }
};