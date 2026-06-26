class Solution {
public:
void solve(vector<int>& candidates,int i,int target,vector<int>ls,vector<vector<int>> &ans){
    if(candidates.size()==i){
        if(target==0){
        ans.push_back(ls);
        }
        return;
    }
    if(candidates[i]<=target){
        ls.push_back(candidates[i]);
        solve(candidates,i,target-candidates[i],ls,ans);
        ls.pop_back();
    }

    solve(candidates,i+1,target,ls,ans);
}
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> ls;
        int i = 0;

        solve(candidates,i,target,ls,ans);
        return ans;
    }
};