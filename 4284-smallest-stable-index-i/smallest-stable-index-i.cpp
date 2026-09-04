class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        vector<int> minimum;
        vector<int> maximum;
        int Max = INT_MIN;
        int Min = INT_MAX;
        int n = nums.size();
        for(int i = 0; i<n; i++){
            if(nums[i]>Max){
                Max = nums[i];
            }
            maximum.push_back(Max);
            Min = INT_MAX;
            for(int j = i; j<n; j++){
                if(nums[j]<Min){
                    Min = nums[j];
                }
            }
            minimum.push_back(Min);

        }

        for(int i = 0; i<n; i++){
            if((maximum[i]-minimum[i])<=k){
                return i;
            }
        }

        return -1;
    }
};