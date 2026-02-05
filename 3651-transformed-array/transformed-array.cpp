class Solution {
public:
    vector<int> constructTransformedArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        int i = 0;
        int idx = 0;
        for(int i = 0; i<n; i++){
            int shift = nums[i]%n;

            int idx = (i+shift)%n;

            if(idx<0){
               idx = ((i + shift) % n + n) % n;
            }

            ans.push_back(nums[idx]);
        }
          return ans;
    }
};