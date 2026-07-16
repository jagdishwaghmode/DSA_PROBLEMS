class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>>ans;
        sort(intervals.begin(),intervals.end());
        int s1 = intervals[0][0];
        int e1 = intervals[0][1];
        for(int i = 1; i<intervals.size(); i++){
            int s2 = intervals[i][0];
            int e2 = intervals[i][1];
            if(e1>=s2){
                s1 = s1;
                e1 = max(e1,e2);
            }
            else{
                ans.push_back({s1,e1});
                s1 = s2;
                e1 = e2;
            }
        }
        ans.push_back({s1,e1});
        return ans;
    }
};