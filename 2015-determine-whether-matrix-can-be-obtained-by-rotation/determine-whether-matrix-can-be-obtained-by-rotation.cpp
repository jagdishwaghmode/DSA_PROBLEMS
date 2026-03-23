class Solution {
public:
    vector<vector<int>> rotateMatrix(vector<vector<int>> mat){
        
        int n = mat.size();
        vector<vector<int>> mat2(n, vector<int>(n));
        
        for(int i = 0; i<n; i++){
            for(int j = 0; j<n; j++){
                mat2[j][n - i - 1] = mat[i][j];
            }
        }
        return mat2;
    }

    bool isEqual(vector<vector<int>>& a, vector<vector<int>>& b){
        int n = a.size();
        for(int i = 0; i<n; i++){
            for(int j = 0; j<n; j++){
                if(a[i][j] != b[i][j]) return false;
            }
        }
        return true;
    }

    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        
        for(int i = 0; i < 4; i++){   
            if(isEqual(mat, target)){
                return true;
            }
            mat = rotateMatrix(mat);  
        }
        return false;
    }
};