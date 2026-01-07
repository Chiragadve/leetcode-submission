class Solution {
public:
    int vowel(char c) {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            return 1;
        }
        return 0;
    }

    int maxVowels(string s, int k) {
        int maximum = 0;
        int initial = 0;
        for (int i = 0; i < k; i++) {
            if (vowel(s[i]) == 1) {
                initial++;
            }
        }

        maximum = initial;

        for (int i = k; i < s.length(); i++) {
            initial = initial - vowel(s[i - k]) + vowel(s[i]);
            maximum = max(initial, maximum);
        }

        return maximum;
    }
};