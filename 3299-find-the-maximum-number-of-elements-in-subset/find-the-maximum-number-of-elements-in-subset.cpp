class Solution {
public:
    int maximumLength(vector<int>& nums) {
        int ans = 0;
        map<long long,int> mpp;

        for(int x: nums){
            mpp[x]++;
        }

        for(auto &[el, freq] : mpp){
            
            // Special case for 1
            if(el == 1){
                int cnt = (freq % 2 == 0) ? freq - 1 : freq;
                ans = max(ans, cnt);
                continue;
            }

            long long x = el;
            int cnt = 0;

            while(mpp.find(x) != mpp.end()){
                if(mpp[x] >= 2) cnt += 2;
                else {
                    cnt += 1;
                    break;
                }

                if(x > 1e9) break;
                x = x * x;
            }

            if(cnt % 2 == 0) cnt--;
            ans = max(ans, cnt);
        }

        return ans;
    }
};