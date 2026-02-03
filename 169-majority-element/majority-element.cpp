class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> counts;
        int n = nums.size();
    for (int num : nums) {
        if (++counts[num] > n / 2) {
            return num;
        }
    }
    return -1;
    }
};