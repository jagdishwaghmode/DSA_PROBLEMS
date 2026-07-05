class Solution {
public:
    int maxValidPairSum(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> suffix(n,0);
        suffix[n-1] = nums[n-1];
        for(int i = n-2; i>=0; i--){
            suffix[i]=max(suffix[i+1],nums[i]);
        }
        int i = 0;
        int sum = 0;
        int maxSum = 0;
        while(i+k<n){
            sum = 0;
            sum+=nums[i]+suffix[i+k];
            cout<<nums[i]<<" "<<suffix[i+k]<<endl;
            maxSum = max(sum,maxSum);
            i++;
        }
        return maxSum;
    }
};