class Solution {
public:
    string convert(string s, int numRows) {
        int n = s.size();
        if(numRows == 1) return s;   

        vector<string> mat(numRows, string(n * 2, '0')); // safer width

        int row = 0, column = 0;
        bool down = true, sideways = false;

        for(int i = 0; i < n; i++){
            mat[row][column] = s[i];

            if(down){
                if(row == numRows - 1){
                    row--;
                    column++;
                    down = false;
                    sideways = true;
                } else {
                    row++;
                }
            }
            else if(sideways){
                if(row == 0){
                    row++;
                    down = true;
                    sideways = false;
                } else {
                    row--;
                    column++;
                }
            }
        }

        string ans = "";
        for(int i = 0; i < numRows; i++){
            for(int j = 0; j < n * 2; j++){
                if(mat[i][j] != '0'){
                    ans += mat[i][j];
                }
            }
        }
        return ans;
    }
};