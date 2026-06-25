class Solution {
public:
    int countMajoritySubarrays(vector<int>& nums, int target) 
    {
        // First method

        // Declarations and initializations
        int i, j, n, count, temp, ans;
        n = nums.size();
        ans = 0;

        // Actual logic
        for(i=0; i<n; i++)
        {
            count = 0;
            for(j=i; j<n; j++)
            {
                if(nums[j] == target)
                count++;

                temp = j - i + 1;
                    if(count > temp/2)
                    ans++;
            }
        }

        // Return answer
        return ans;
    }
};