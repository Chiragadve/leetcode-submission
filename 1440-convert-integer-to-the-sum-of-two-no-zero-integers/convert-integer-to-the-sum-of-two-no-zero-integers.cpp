class Solution {
public:
    bool containsZero(int n) {
        if (n == 0) return 0;
        while(n > 0){
            if(n % 10 == 0) return true;
                n/=10;
        }
    return false;
    }

    vector<int> getNoZeroIntegers(int n) {
        vector<int> ans;
        for(int i = 1; i < n; i++){
            int a = i;
            int b = n-i;
            if(!containsZero(a) && !containsZero(b)) {
                ans.push_back(a);
                ans.push_back(b);
                break;
            }
        }
        return ans;
    }
};