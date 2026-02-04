class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        if(nums.size()==0)return 0;

        int count = 1;
        int maxCount = 1;
        set<int> s;
        for(int i = 0; i<nums.size(); i++){
            s.insert(nums[i]);
        }
        vector<int> seq;
        for(auto it : s){
            seq.push_back(it);
        }
        for(int i =1; i<seq.size(); i++){
            if(seq[i]-seq[i-1]==1){
                count++;
                maxCount = max(count,maxCount);
            }
            else{
                count = 1;
            }
        }
        return maxCount;
    }
};