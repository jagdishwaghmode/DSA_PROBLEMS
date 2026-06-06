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

public:
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
};