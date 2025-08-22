class Solution {
public:
    int minimumArea(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();

        int start_row = n, end_row = 0;
        int start_col = m, end_col = 0;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == 1) {
                    start_row = min(start_row, i);
                    end_row = max(end_row, i);
                    start_col = min(start_col, j);
                    end_col = max(end_col, j);
                }
            }
        }

        int width = (end_col - start_col + 1);
        int height = (end_row - start_row + 1);

        return width * height;
    }
};