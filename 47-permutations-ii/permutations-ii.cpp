class Solution {
    void solve(vector<int> nums, int i, set<vector<int>>& s){
        if(i>=nums.size()){
            s.insert(nums);
            return;
        }

        for(int j = i; j<nums.size(); j++){
            swap(nums[i],nums[j]);
            solve(nums,i+1,s);
            swap(nums[i],nums[j]);
        }
    }
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        set<vector<int>> s;
        int i = 0;
        vector<vector<int>> ans;
        solve(nums,i,s);
        for(vector<int> x : s){
            ans.push_back(x);
        }
        return ans;
    }
};