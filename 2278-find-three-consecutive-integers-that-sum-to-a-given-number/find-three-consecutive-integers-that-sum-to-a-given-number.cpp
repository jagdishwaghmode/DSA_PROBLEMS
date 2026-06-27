class Solution {
public:
    vector<long long> sumOfThree(long long num) {
        long long n = num/3;
        vector<long long> ans(3);
        ans[0] = n-1;
        ans[1] = n;
        ans[2] = n+1;

        if(ans[0]+ans[1]+ans[2]==num){
            return ans;
        }

        return {};
    }
};