class Solution {
public:
    vector<int> partitionLabels(string s) {
        unordered_map<char, pair<int, int>> mpp;
        vector<vector<int>> intervals;

        for (int i = 0; i < s.size(); i++) {
            if (mpp.find(s[i]) == mpp.end()) {
                mpp[s[i]] = {i, i}; 
            } else {
                mpp[s[i]].second = i;
            }
        }

        for (auto it : mpp) {
            intervals.push_back({it.second.first,it.second.second});
        }
        sort(intervals.begin(),intervals.end());
        vector<vector<int>>ans;
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
        vector<int> diff;

        for(int i = 0; i<ans.size(); i++){
            diff.push_back((ans[i][1]-ans[i][0])+1);
        }

        return diff;


    }
};