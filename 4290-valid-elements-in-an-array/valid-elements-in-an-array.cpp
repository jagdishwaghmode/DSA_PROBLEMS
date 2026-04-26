class Solution {
public:
    vector<int> findValidElements(vector<int>& nums) {
        vector<bool> vec(nums.size(),false);
        int Max = nums[0];
        vec[0] = true;
        vec[nums.size()-1]=true;
        for(int i = 1; i<nums.size(); i++){
            if(nums[i]>Max){
                vec[i]=true;
                Max = nums[i];
            }
        }
        Max = nums[nums.size()-1];
        for(int i = nums.size()-2; i>=0; i--){
            if(nums[i]>Max){
                vec[i]=true;
                Max = nums[i];
            }
        }
        vector<int> ans;
        for(int i = 0; i<vec.size(); i++){
            if(vec[i]){
                ans.push_back(nums[i]);
            }
        }
        return ans;
    }
};