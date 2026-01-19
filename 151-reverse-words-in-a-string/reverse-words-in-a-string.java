class Solution {
    public String reverseWords(String s) {

        StringBuffer word = new StringBuffer();
        StringBuffer result = new StringBuffer();

        for (int i = s.length() - 1; i >= 0; i--) {
            if (s.charAt(i) != ' ') {
                word.append(s.charAt(i));
            } else if (word.length() > 0) {
                word.reverse();
                result.append(word).append(' ');
                word.setLength(0);
            }
        }

        if (word.length() > 0) {
            word.reverse();
            result.append(word);
        } else if (result.length() > 0) {
            result.setLength(result.length() - 1);
        }
        return result.toString();
    }
}