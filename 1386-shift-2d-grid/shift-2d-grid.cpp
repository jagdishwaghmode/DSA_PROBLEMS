class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int row = grid.size();
        int col = grid[0].size();
        for(int i = 0; i<k; i++){
        for(int i = 0; i<col-1; i++){
            for(int j = 0; j<row; j++){
                swap(grid[j][0],grid[j][i+1]);
            }
        }
        for(int i = 0; i<row-1; i++){
                swap(grid[0][0],grid[i+1][0]);
        }
        }
        return grid;
    }
};