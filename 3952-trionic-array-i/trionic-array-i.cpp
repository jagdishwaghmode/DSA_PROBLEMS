class Solution {
public:
    bool isTrionic(vector<int>& nums) {
        vector<int> pivot;
        for(int i=1;i<nums.size()-1;i++){
            if(nums[i]<nums[i-1] and nums[i]<nums[i+1])pivot.push_back(nums[i]);
            if(nums[i]>nums[i-1] and nums[i]>nums[i+1])pivot.push_back(nums[i]);
            if(nums[i]==nums[i-1] or nums[i]==nums[i+1])return false;
        }
        if(pivot.size()!=2)return false;
        if(pivot[0]>pivot[1])return true;
        return false;
    }
};