class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        int maximum = *max_element(nums.begin(), nums.end());

        int cnt = 0;
        int j = 0;
        long long ans = 0;

        for(int i = 0; i < nums.size(); i++) {

            if(nums[i] == maximum)
                cnt++;

            while(cnt >= k) {
                ans += nums.size() - i;

                if(nums[j] == maximum)
                    cnt--;

                j++;
            }
        }

        return ans;
    }
};