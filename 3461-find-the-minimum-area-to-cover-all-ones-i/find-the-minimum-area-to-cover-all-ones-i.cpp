class Solution {
public:
    int minimumArea(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int maxrow = -1, maxcol = -1, minrow = n,mincol = m;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++) {
                if(grid[i][j] == 1){
                     maxrow = max(maxrow,i);
                     maxcol = max(maxcol,j);
                     minrow = min(minrow,i);
                     mincol = min(mincol,j);
                }
            }
        }
        int row = maxrow - minrow + 1;
        int col = maxcol - mincol + 1;
    return row * col;
    }
};