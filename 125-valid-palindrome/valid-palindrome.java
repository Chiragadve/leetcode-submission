class Solution {
    public boolean isPalindrome(String s) {
        int i = 0;
        int j = s.length() - 1;

        String c = s.toLowerCase();

        while (i < j) {
            while (i < j && !Character.isLetterOrDigit(c.charAt(i))) {
                i++;
            }

            while (i < j && !Character.isLetterOrDigit(c.charAt(j))) {
                j--;
            }

            if (c.charAt(i) != c.charAt(j)) {
                return false;
            }
            j--;
            i++;
        }
        return true;
    }
}