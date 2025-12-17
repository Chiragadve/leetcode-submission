class Solution {
public:
    bool check(string& newstr, int l, int r) {

        if (l > r) {
            return true;
        }

        if (newstr[l] != newstr[r]) {
            return false;
        }
        return check(newstr, l + 1, r - 1);
    }

    bool isPalindrome(string s) {
        string newstr = "";

        for (char i : s) {
            if (isalnum(i)) {
                newstr += tolower(i);
            }
        }
        return check(newstr, 0, newstr.length() - 1);
    }
};