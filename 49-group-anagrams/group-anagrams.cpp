class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n = strs.size();
        vector<string> s;
        for(int i = 0; i<n; i++){
            string temp = strs[i];
            sort(temp.begin(),temp.end());
            s.push_back(temp);
        }
        unordered_map<string,vector<int>> mpp;
        for(int i = 0; i<n; i++){
            mpp[s[i]].push_back(i);
        }
        vector<vector<string>> ans;
        for(auto it: mpp){
            int x = it.second.size();
            vector<string> temp2;
            for(int j = 0; j<x; j++){
                temp2.push_back(strs[it.second[j]]);
            }
            ans.push_back(temp2);
            temp2.clear();
        }
        return ans;
    }
};

//aet = 0,1,3