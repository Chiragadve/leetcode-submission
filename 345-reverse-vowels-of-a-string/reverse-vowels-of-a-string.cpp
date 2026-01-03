class Solution {
public:
    bool isvowel(char c) {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
            return true;
        }
        return false;
    }

    string reverseVowels(string s) {
        int i = 0;
        int j = s.length() - 1;

        while (i < j) {
            while(i < j && !isvowel(s[i])){
                i++;
            }
            while(i < j && !isvowel(s[j])){
                j--;
            }
            if(isvowel(s[i]) && isvowel(s[j])){
                swap(s[i],s[j]);
                i++;
                j--;
            }
        }
        return s;
    }
};