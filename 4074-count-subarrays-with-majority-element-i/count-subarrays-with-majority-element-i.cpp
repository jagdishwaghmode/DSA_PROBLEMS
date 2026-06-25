class Solution {
public:
    int countMajoritySubarrays(vector<int>& nums, int target) {
        int n = nums.size();
        int cnt = 0;

        for(int i = 0; i < n; i++){
            unordered_map<int,int> mpp;

            for(int j = i; j < n; j++){
                mpp[nums[j]]++;

                int len = j - i + 1;

                if(mpp[target] > len / 2){
                    cnt++;
                }
            }
        }
        return cnt;
    }
};