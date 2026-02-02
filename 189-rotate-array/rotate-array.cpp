class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;
        vector<int> ans;
        for(int i = n-k; i<n+(n-k); i++){
            ans.push_back(nums[i%n]);
        }
        for(int i = 0; i<ans.size(); i++){
            nums[i] = ans[i];
        }
    }
};