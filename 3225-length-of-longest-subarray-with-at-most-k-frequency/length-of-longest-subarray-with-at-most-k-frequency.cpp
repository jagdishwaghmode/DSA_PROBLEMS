class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int maxlen = 0;
        int n = nums.size();
        unordered_map<int,int> mpp;
        int j = 0;
        for(int i = 0; i<n; i++){
            mpp[nums[i]]++;
            while(mpp[nums[i]]>k){
                mpp[nums[j]]--;
                j++;
            }
            maxlen = max(i-j+1,maxlen);
        }
        return maxlen;
    }
};