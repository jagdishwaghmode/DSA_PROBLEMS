class Solution {
public:
int mini(int i,vector<int> nums){
    int n = nums.size();
    int min = INT_MAX;
    for(int j  = i; j<n; j++){
        if(nums[j]<min){
            min = nums[j];
        }
        
    }
    return min;
}
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        int maxi = INT_MIN;
        for(int i = 0; i<n; i++){
            maxi = max(nums[i],maxi);
            int min = mini(i,nums);
            int diff = maxi-min;
            if(diff<=k){
                return i;
            }
        }
        return -1;
    }
};