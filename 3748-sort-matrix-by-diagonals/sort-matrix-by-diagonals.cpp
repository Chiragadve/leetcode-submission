class Solution {
public:
    int n;

    void sortDiagonal(int r, int c, vector<vector<int>>& grid, bool asc) {
        vector<int> vec;

        int i = r, j = c;

        // collect diagonal
        while (i < n && j < n) {
            vec.push_back(grid[i][j]);
            i++;
            j++;
        }

        // sort diagonal
        if (asc) {
            sort(vec.begin(), vec.end());  // ascending
        } else {
            sort(vec.rbegin(), vec.rend()); // descending
        }

        // put back
        i = r;
        j = c;
        for (int val : vec) {
            grid[i][j] = val;
            i++;
            j++;
        }
    }

    vector<vector<int>> sortMatrix(vector<vector<int>>& grid) {
        n = grid.size();

        // bottom-left diagonals  non-increasing
        for (int row = 0; row < n; row++) {
            sortDiagonal(row, 0, grid, false);
        }

        // top-right diagonals  non-decreasing
        for (int col = 1; col < n; col++) {
            sortDiagonal(0, col, grid, true);
        }

        return grid;
    }
};
