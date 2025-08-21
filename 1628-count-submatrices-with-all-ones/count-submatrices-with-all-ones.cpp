class Solution {
public:
    int oneDArrayCount(vector<int>& vec) {
        int count = 0;
        int ans = 0;

        for (int& val : vec) {
            if (val == 0) {
                count = 0;
            } else {
                count++;
            }
            ans += count;
        }
        return ans;
    }

    int numSubmat(vector<vector<int>>& mat) {
        int m = mat[0].size();
        int n = mat.size();
        int total = 0;
        for (int i = 0; i < n; i++) {
            vector<int> vec(m, 1);


            for (int j = i; j < n; j++) {
                for (int k = 0; k < m; k++) {
                    vec[k] &= mat[j][k];
                }
                total += oneDArrayCount(vec);
            }
        }
    return total;
    }
};