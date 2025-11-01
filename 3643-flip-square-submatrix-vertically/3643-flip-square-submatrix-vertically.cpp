class Solution {
public:
    vector<vector<int>> reverseSubmatrix(vector<vector<int>>& grid, int x, int y, int k) {
        int top = x;
        int bottom = x + k - 1;

        for (int i = 0; i < k / 2; i++) {
            for (int j = y ; j < y + k; j++) {
                swap(grid[x + i][ j], grid[bottom - i] [j]);
            }
        }

        return grid;
    }
};