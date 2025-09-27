class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string result;
        int n = max(word1.length(), word2.length());
        int j = 0;

        for (int i = 0; i < n; i++) {
            if (i < word1.length()) {
                result += word1[i];
            }

            if (j < word2.length()) {
                result += word2[j];
                j++;
            }
        }
        return result;
    }
};