class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> maximum(n,0);
        vector<int> minimum(n,0);
        int Max = INT_MIN;
        int Min = INT_MAX;
        for(int i = 0; i<n; i++){
            if(Max<nums[i]){
                Max = nums[i];
            }
            maximum[i] = Max;
        }

        for(int i = n-1; i>=0; i--){
            if(Min>nums[i]){
                Min = nums[i];
            }
            minimum[i] = Min;
        }
        for(int i = 0; i<n; i++){
            if((maximum[i]-minimum[i])<=k){
                return i;
            }
        }
        return -1;
    }
};