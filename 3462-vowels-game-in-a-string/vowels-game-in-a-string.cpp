class Solution {
public:
    bool isvowel(char c) {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            return true;
        }
        return false;
    }

    bool doesAliceWin(string s) {
        int vowel = 0;

        for (char c : s) {
            if (isvowel(c)) {
                vowel++;
            }
        }

        if (vowel <= 0)
            return false;

       
        
        
    return true;
    }
};