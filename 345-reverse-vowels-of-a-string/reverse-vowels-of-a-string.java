class Solution {
    boolean isvowel(char c) {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O'
                || c == 'U') {
            return true;
        }
        return false;
    }

    void swap(StringBuilder sb, int i, int j) {
        char temp = sb.charAt(i);
        sb.setCharAt(i, sb.charAt(j));
        sb.setCharAt(j, temp);
    }

    public String reverseVowels(String s) {
        int i = 0;
        int j = s.length() - 1;
        StringBuilder sb = new StringBuilder(s);

        while (i < j) {
            if (!isvowel(sb.charAt(i))) {
                i++;
            } else if (!isvowel(sb.charAt(j))) {
                j--;
            } else {
                swap(sb, i, j);
                i++;
                j--;
            }
        }
        return sb.toString();
    }
}