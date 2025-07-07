class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {

        int rows = matrix.size();
        int cols = matrix[0].size();

        vector<int> rowsarr(rows,0);
        vector<int> colsarr(cols,0);

        for(int i = 0; i < rows; i++) {
            for(int j = 0; j < cols; j++) {
                if(matrix[i][j] == 0) {
                    rowsarr[i] = 1;
                    colsarr[j] = 1;
                }
            }
        }

        for(int i = 0; i < rows; i++){
            for(int j = 0; j < cols; j++) {
                if(rowsarr[i] == 1 || colsarr[j] == 1){
                    matrix[i][j] = 0;
                }
            }
        }
    }
};