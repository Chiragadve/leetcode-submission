class Solution {
public:
    long long total;
    long long result;
    int titleToNumber(string columnTitle) {
        for(int i = 0; i < columnTitle.length();i++) {
             total = total * 26 + (columnTitle[i] - 'A' + 1); 
             result += total;
        }
        return total;
    }
};