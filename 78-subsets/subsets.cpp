class Solution {
void solve(vector<int> nums, int i, vector<int> output, vector<vector<int>>& ans){
    if(i>=nums.size()){
        ans.push_back(output);
        return;
    }

    solve(nums,i+1,output,ans);

    output.push_back(nums[i]);
    solve(nums,i+1,output,ans);
}
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        int i = 0;
        vector<int> output;
        solve(nums,i,output,ans);
        return ans;
    }
};