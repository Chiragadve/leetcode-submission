class Solution {
    public void reverseString(char[] s) {
        int i = 0;
        int j = s.length - 1;

        while(i < j){
            char s1 = s[i];
            char s2 = s[j];

            s[i] = s2;
            s[j] = s1;

            i++;
            j--;
        }
    }
}