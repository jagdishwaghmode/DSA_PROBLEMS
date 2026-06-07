class Solution {
    private:
    vector<int> nextSmallerIndex(vector<int> heights,int n){
        stack<int> s;
        s.push(-1);
        vector<int> next(n);
        for(int i = n-1; i>=0; i--){
            int curr = heights[i];
            while(s.top()!=-1&&heights[s.top()]>=curr){
                s.pop();
            }
            next[i] = s.top();
            s.push(i);
        }
        return next;
    }

    vector<int> prevSmallerIndex(vector<int> heights,int n){
        stack<int> s;
        s.push(-1);
        vector<int> next(n);
        for(int i = 0; i<n; i++){
            int curr = heights[i];
            while(s.top()!=-1&&heights[s.top()]>=curr){
                s.pop();
            }
            next[i] = s.top();
            s.push(i);
        }
        return next;
    }
     int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        vector<int> next(n);
        next = nextSmallerIndex(heights,n);

        vector<int> prev(n);
        prev = prevSmallerIndex(heights,n);
        int area = INT_MIN;
        for(int i = 0; i<n; i++){
            int l = heights[i];
            
            if(next[i]==-1){
                next[i]=n;
            }
            int b = next[i]-prev[i]-1;
            int newArea = l*b;
            area = max(area,newArea); 
        }
        return area;
    }
public:
    int maximalRectangle(vector<vector<char>>& matrix) {
        int rows = matrix.size(), cols = matrix[0].size();;
        vector<vector<int>> mat(rows, vector<int>(cols, 0));

        for(int i = 0; i<matrix.size(); i++){
            for(int j = 0; j<matrix[0].size(); j++){
                if(matrix[i][j]=='1'){
                    mat[i][j]=1;
                }
            }
        }
        int area = largestRectangleArea(mat[0]);

        for(int i = 1; i<matrix.size(); i++){
            for(int j = 0; j<matrix[0].size(); j++){
                if(mat[i][j]!=0){
                    mat[i][j]+=mat[i-1][j];
                }
                else{
                    mat[i][j]=0;
                }
            }
           area = max(area,largestRectangleArea(mat[i]));
        }
        return area;
    }
};