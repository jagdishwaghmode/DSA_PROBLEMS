class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int i = 1;

        while (true) {
            if (find(nums.begin(), nums.end(), k * i) == nums.end()) {
                return k * i;
            }
            i++;
        }
    }
};
