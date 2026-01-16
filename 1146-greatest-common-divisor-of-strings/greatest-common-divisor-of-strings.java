class Solution {
    int gcd(int num1, int num2) {
        while (num2 != 0) {
            int temp = num2;
            num2 = num1 % num2;
            num1 = temp;
        }
        return num1;
    }

    public String gcdOfStrings(String str1, String str2) {
        int num1 = str1.length();
        int num2 = str2.length();

        if (!(str1 + str2).equals(str2 + str1)) {
            return "";
        }
        return str1.substring(0, gcd(num1, num2));
    }
}