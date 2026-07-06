class Solution {
public:
    bool isMiddleElementUnique(vector<int>& nums) {
        unordered_map<int,int> mpp;
        int n = nums.size();
        for(int i = 0; i<n; i++){
            mpp[nums[i]]++;
        }
        int mid = n/2;

        if(mpp[nums[mid]]==1){
            return true;
        }
        return false;
    }
};