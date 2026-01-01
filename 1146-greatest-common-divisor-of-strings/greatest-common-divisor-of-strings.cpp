class Solution {
public:
    int gcd(int num1, int num2) {
        while (num2 != 0) {
            int temp = num2;
            num2 = num1 % num2;
            num1 = temp;
        }
        return num1;
    }

    string gcdOfStrings(string str1, string str2) {
        int num1 = str1.size();
        int num2 = str2.size();

        if (str1 + str2 != str2 + str1)
            return "";

        return str1.substr(0,gcd(num1,num2));
    }
};