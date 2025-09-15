class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        unordered_set<char> brokenLetterset;

        for (char c : brokenLetters) {
            brokenLetterset.insert(c);
        }

        stringstream ss(text);
        string word;
        int count = 0;
        while (ss >> word) {
            bool contains = false;
            for (char c : word) {
                if (brokenLetterset.count(c)) {
                    contains = true;
                }
            }
            if (!contains) {
                count++;
            }
        }
        return count;
    }
};