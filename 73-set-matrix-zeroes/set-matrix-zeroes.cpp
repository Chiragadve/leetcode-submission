class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
       int rows = matrix.size();
       int cols = matrix[0].size();
       int mark = -987656789876;

       for(int i = 0; i < rows; i++) {
            for(int j = 0; j < cols; j++) {
                if(matrix[i][j] == 0) {
                    for(int k = 0; k < rows; k++) {
                        if(matrix[k][j] != 0)
                        matrix[k][j] = mark;
                    }
                    for(int l = 0; l < cols; l++) {
                        if(matrix[i][l] != 0)
                        matrix[i][l] = mark;
                    }
                   
                }
            }
       }
       for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            if(matrix[i][j] == mark) {
                matrix[i][j] = 0;
            }
        }
       }
    }
};