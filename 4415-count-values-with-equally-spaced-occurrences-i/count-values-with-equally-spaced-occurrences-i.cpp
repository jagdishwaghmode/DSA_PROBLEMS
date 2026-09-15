class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        unordered_map<int,int> mpp1;
        unordered_map<int,vector<int>> mpp2;
        for(int i = 0 ; i<nums.size(); i++){
            mpp1[nums[i]]++;
            mpp2[nums[i]].push_back(i);
        }
        int ans = 0;
        for(int i = 0; i<nums.size(); i++){
            if(mpp1[nums[i]]==3){
               if(mpp2[nums[i]][1]-mpp2[nums[i]][0]==mpp2[nums[i]][2]-mpp2[nums[i]][1]){
                ans++;
               }
               mpp1.erase(nums[i]);
            }
        }
        return ans;
    }
};