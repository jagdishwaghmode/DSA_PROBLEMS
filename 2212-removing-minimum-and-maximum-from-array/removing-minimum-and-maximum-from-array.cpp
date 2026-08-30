class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int min_idx = 0;
        int max_idx = 0;
        int Max = nums[0];
        int Min = nums[0];
        for(int i = 1; i<nums.size(); i++){
            if(nums[i]>Max){
                max_idx = i;
                Max = nums[i];
            }
            if(nums[i]<Min){
                min_idx = i;
                Min = nums[i];
             }
        }
        int n =nums.size();

        int case1 = max(max_idx, min_idx) + 1;
        int case2 = max((n -max_idx), (n-min_idx)) ;
        int case3 = (n-max_idx) + min_idx+1;
        int case4 = (n-min_idx) + max_idx+1;

        return min({case1,case2,case3,case4});
    }
};