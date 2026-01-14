class Solution {
    public boolean isPalindrome(int x) {
        int reverse = 0;
        int original = x;
        while (x > 0) {
            int last = x % 10;
            reverse = reverse * 10 + last;
            x /= 10;
        }
    return (reverse == original) ? true : false;
    }
}