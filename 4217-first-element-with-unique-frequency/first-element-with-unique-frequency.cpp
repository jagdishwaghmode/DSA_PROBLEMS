class Solution {
public:
    int firstUniqueFreq(vector<int>& nums) {
        unordered_map<int,int> freq;
        unordered_map<int,int> freqCount;
        for(int i = 0; i<nums.size(); i++){
            freq[nums[i]]++;
        }
        for(auto it : freq){
            freqCount[it.second]++;
        }
        int unique = -1;
        for(int i=0;i<nums.size();i++){
            if(freqCount[freq[nums[i]]]==1){
                unique=nums[i];
                break;
            }
        }
        return unique;
    }
};