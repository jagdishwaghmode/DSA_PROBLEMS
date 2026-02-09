class Solution {
public:

    int dominantIndices(vector<int>& nums) {
        int n = nums.size();
        int j = 1;
        int cnt = 0;
        int sum = 0;
        for(int i = 0; i<n-1; i++){
            sum = 0;
            for(int j = i+1; j<n; j++){
                sum+=nums[j];
            }
            if(sum/(n-i-1)<nums[i]){
                cnt++;
            }
        }
        return cnt;
    }
};