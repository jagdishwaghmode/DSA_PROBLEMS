class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        int maxi = INT_MIN;
        int n = nums.size();
        vector<int> prefixGcd;
        for(int i = 0; i<n; i++){
            if(nums[i]>maxi){
                maxi = nums[i];
            }
            int x = gcd(nums[i],maxi);
            prefixGcd.push_back(x);
        }
        sort(prefixGcd.begin(),prefixGcd.end());
        int i = 0;
        int j = n-1;
        long long sum = 0;
        while(i<j){
            sum+=gcd(prefixGcd[i],prefixGcd[j]);
            i++;
            j--;
        }

        return sum;
    }
};