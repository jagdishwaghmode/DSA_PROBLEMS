class Solution {
public:
    int minAbsoluteDifference(vector<int>& nums) {
        int n = nums.size();
        int diff = INT_MAX;
        int found = 0;
        for(int i= 0; i<n; i++){
            for(int j = 0; j<n; j++){
                if(nums[i]==1&&nums[j]==2){
                    found = 1;
                    diff = min(diff,abs(j-i));
                }
            }
        }
        if(found == 1)return diff;

        return -1;
        
    }
};