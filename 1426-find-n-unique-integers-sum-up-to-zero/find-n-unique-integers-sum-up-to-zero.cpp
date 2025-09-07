class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> result;
        if (n % 2 != 0) {
            result.push_back(0);
        }
        
        for (int i = 1; i < ceil(n / 2) + 1; i++) {
            result.push_back(i);
            result.push_back(i - (i * 2));
        }
        return result;
    }
};