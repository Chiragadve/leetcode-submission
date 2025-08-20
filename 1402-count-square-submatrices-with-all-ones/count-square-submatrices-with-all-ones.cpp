class Solution {
public:
    int countSquares(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        vector<vector<int>>dp(n,vector<int> (m,0)); // defining a dp array as a helper filled with 0's

        // filling up the main array using the dp array with 0's
        for(int j = 0; j < m; j++) dp[0][j] = matrix[0][j];
        for(int i = 0; i < n; i++) dp[i][0] = matrix[i][0];
        
        // building the main dp array 
        for(int i = 1; i < n; i++){
            for(int j = 1; j < m; j++){
                // did this because if the value is set to 0 we don't need to count that block
                // we try the cases only when the array contains 1 therefor else case which is 
                // obviously suppose to be 1
                if(matrix[i][j] == 0) {
                     dp[i][j] = 0;
                }
                else{
                    // finding the min of the top left and diagonal side of the matrix
                    dp[i][j] = 1 + min(dp[i-1][j],min(dp[i-1][j-1],dp[i][j-1]));
                }
            }
        }

        // sum up all the squares 
        int sum = 0;
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++){
                sum+=dp[i][j];
            }
        }
    return sum;
    }
};