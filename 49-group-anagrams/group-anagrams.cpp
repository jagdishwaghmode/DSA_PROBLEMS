class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<string> str;
        int n = strs.size();
        for(int i = 0; i<n; i++){
            string s = strs[i];
            sort(s.begin(),s.end());
            str.push_back(s);
        }
        unordered_map<string,vector<int>> mpp;
        for(int i = 0; i<n; i++){
            mpp[str[i]].push_back(i);
        }
        vector<vector<string>> ans;
        
        for(auto it:mpp){
            vector<string> res;
            int n = it.second.size();
            for(int i = 0; i<n; i++){
                res.push_back(strs[it.second[i]]);
            }
            ans.push_back(res);
        }
        return ans;
    }
};