class Solution {
    public boolean isvowel(char c) {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
                c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
            return true;
        }
        return false;
    }

    public String reverseVowels(String s) {
        int i = 0;
        int j = s.length() - 1;
        StringBuilder sb = new StringBuilder(s);

        while (i < j) {
            while (i < j && !isvowel(sb.charAt(i))) {
                i++;
            }
            while (i < j && !isvowel(sb.charAt(j))) {
                j--;
            }
            while (i < j && isvowel(sb.charAt(i)) && isvowel(sb.charAt(j))) {
                char temp = sb.charAt(i);
                sb.setCharAt(i, sb.charAt(j));
                sb.setCharAt(j, temp);
                i++;
                j--;
            }
        }
        return sb.toString();
    }
}