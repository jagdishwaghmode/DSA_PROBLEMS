class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> lessThan;
        vector<int> greaterThan;
        int pivotCnt = 0;
        for(int i = 0; i<nums.size(); i++){
            if(nums[i]<pivot){
                lessThan.push_back(nums[i]);
            }
            else if(nums[i]==pivot){
                pivotCnt++;
            }
            else{
                greaterThan.push_back(nums[i]);
            }
        }
        for(int i = 0; i<pivotCnt; i++){
            lessThan.push_back(pivot);
        }
        for(int i = 0; i<greaterThan.size(); i++){
            lessThan.push_back(greaterThan[i]);
        }
        return lessThan;
    }
};