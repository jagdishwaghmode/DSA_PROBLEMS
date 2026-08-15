class Solution {
public:
    int countRatioSubarrays(vector<int>& nums, int a, int b) {
        int n = nums.size();
        int cnt = 0;

        for (int i = 0; i < n; i++) {
            int x = 0; // even
            int y = 0; // odd

            for (int j = i; j < n; j++) {
                if (nums[j] % 2) {
                    y++;
                } else {
                    x++;
                }

                if (y > 0 && x * b <= y * a) {
                    cnt++;
                }
            }
        }

        return cnt;
    }
};