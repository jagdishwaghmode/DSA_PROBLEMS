class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        vector<long long> square;
        int n = nums.size();
        for(int i = 0; i<n; i++){
            long long s = pow(nums[i],2);
            square.push_back(s);
        }
        sort(square.begin(),square.end());
        long long sum1 = 0;
        long long sum2 = 0;
        for(int i = 0; i<n/2; i++){
            sum1+=square[i];
        }
        for(int i = n/2; i<n; i++){
            sum2+=square[i];
        }

        return sum2-sum1;
    }
};