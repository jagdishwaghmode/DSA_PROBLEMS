class Solution {
    void solve(vector<vector<int>>& ans,int i,vector<int> nums){
        if(i>=nums.size()){
            ans.push_back(nums);
            return;
        }

        for(int j = i; j<nums.size(); j++){
            swap(nums[j],nums[i]);
            solve(ans,i+1,nums);
            swap(nums[j],nums[i]);
        }
    }
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        int i  = 0;
        solve(ans,i,nums);
        return ans;
    }
};