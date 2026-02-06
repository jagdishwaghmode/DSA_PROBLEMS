class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        int n = nums.size();
        vector<long long> ans;
        for(int i = 0; i<n; i++){
            long long square = nums[i]*nums[i];
            ans.push_back(square);
        }
        sort(ans.begin(),ans.end());
        long long sum1 = 0;
        long long sum2 = 0;
        for(int i = 0; i<n/2; i++){
            sum1+=ans[i];
        }
        for(int i = n/2; i<n; i++){
            sum2+=ans[i];
        }
        return sum2-sum1;
    }
};