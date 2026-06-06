class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n = nums.size();
        vector<int> leftSum(n,0);
        vector<int> rightSum(n,0);

        if(n==1){
            return {0};
        }
        int sum = 0;
        for(int i = 0;i<n-1; i++){
            sum+=nums[i];
            leftSum[i+1]=sum;
            cout<<sum<<" ";
        }
        sum = 0;
        for(int i = 0; i<n-1; i++){
            int j = i+1;
            sum=0;
            while(j<n){
                sum+=nums[j];
                j++;
            }
            rightSum[i] = sum;
            cout<<sum<<" ";
        }
        vector<int> ans;
        for(int i = 0; i<n; i++){
            ans.push_back(abs(leftSum[i]-rightSum[i]));
        }
        return ans;
    }
};