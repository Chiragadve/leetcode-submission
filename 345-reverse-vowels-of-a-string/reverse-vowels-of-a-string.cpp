class Solution {
public:
    string reverseVowels(string s) {
        int i = 0;
        int j = s.length() - 1;
        unordered_set<char> vowel = {'a', 'e', 'i', 'o', 'u',
                                     'A', 'E', 'I', 'O', 'U'};

        while (i < j) {
            if (!vowel.count(s[i])) {
                i++;
            } else if (!vowel.count(s[j])) {
                j--;
            } else {
                swap(s[i], s[j]);
                i++;
                j--;
            }
        }
        return s;
    }
};