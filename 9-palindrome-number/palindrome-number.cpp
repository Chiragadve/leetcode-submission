class Solution {
public:
    bool isPalindrome(int x) {
        int revNum = 0;
        int original = x;
        if (x < 0)
            return false;

        while (x != 0) {
            int lastdigit = x % 10;
             if (revNum > INT_MAX / 10 ||
               (revNum == INT_MAX / 10 && lastdigit > 7)) {
                return false;
            }
            revNum = revNum * 10 + lastdigit;
            x /= 10;
        }

        if (revNum == original) {
            return true;
        }
        return false;
    }
};