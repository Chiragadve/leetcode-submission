class Solution {
public:
    string toLower(string s) {
        for (char& c : s)
            c = tolower(c);
        return s;
    }

    string devowel(string s) {
        for (char& c : s) {
            char lc = tolower(c);
            if (lc == 'a' || lc == 'e' || lc == 'i' || lc == 'o' || lc == 'u') {
                c = '*';
            } else {
                c = lc;
            }
        }
        return s;
    }

    vector<string> spellchecker(vector<string>& wordlist,
                                vector<string>& queries) {
        unordered_set<string> exactMatch(wordlist.begin(),
                                         wordlist.end()); // rule 1
        unordered_map<string, string> caseMap;            // rule 2
        unordered_map<string, string> vowelMap;           // rule 3

        vector<string> result;

        for (string w : wordlist) {
            string lower = toLower(w); // my defined helper function
            string vmask = devowel(w); // my defined helper function

            if (!caseMap.count(lower))
                caseMap[lower] = w; // populate if not already
            if (!vowelMap.count(vmask))
                vowelMap[vmask] = w;
        }

        for (auto q : queries) {
            if (exactMatch.count(q)) {
                result.push_back(q);
            } else {
                string lower = toLower(q); // helper
                if (caseMap.count(lower)) {
                    result.push_back(
                        caseMap[lower]); // here caseMap[lower] because in
                                         // caseMap key = lower of the word
                                         // itlself yellow = yellOw
                } else {
                    string vmask = devowel(q);
                    if (vowelMap.count(vmask)) {
                        result.push_back(vowelMap[vmask]);
                    } else {
                        result.push_back("");
                    }
                }
            }
        }
        return result;
    }
};