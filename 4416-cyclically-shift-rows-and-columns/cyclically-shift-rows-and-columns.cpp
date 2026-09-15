class Solution {
void shiftRow(vector<vector<int>>& grid,int n,int j){
    int i = 0;
    while(i<n-1){
        swap(grid[j][i],grid[j][i+1]);
        i++;
    }
}
void shiftCol(vector<vector<int>>& grid,int n,int i){
    int j = 0;
    while(j<n-1){
        swap(grid[j][i],grid[j+1][i]);
        j++;
    }
}
public:
    vector<vector<int>> cyclicShift(int n, vector<vector<int>>& grid, vector<int>& rowShift, vector<int>& colShift) {
        for(int i = 0; i<n; i++){
            int x = rowShift[i];
            for(int j = 0; j<x; j++){
                shiftRow(grid,n,i);
            }
        }
        for(int i = 0; i<n; i++){
            int x = colShift[i];
            for(int j = 0; j<x; j++){
                shiftCol(grid,n,i);
            }
        }

        return grid;
    }
};