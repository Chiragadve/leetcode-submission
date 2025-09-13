class Solution {
public:
    bool isvowel(char c) {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            return true;
        }
        return false;
    }
    int maxFreqSum(string s) {
        unordered_map<char, int> freq;

        for (auto c : s) {
            freq[c]++;
        }

        int maxvowel = 0;
        int maxconsonent = 0;

        for (auto pair : freq) {
            if (isvowel(pair.first) && pair.second > maxvowel) {
                maxvowel = pair.second;
            }
            if (!isvowel(pair.first) && pair.second > maxconsonent) {
                maxconsonent = pair.second;
            }
        }
        return maxvowel + maxconsonent;
    }
};