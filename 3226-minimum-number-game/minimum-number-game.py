class Solution:
    def numberGame(self, nums: List[int]) -> List[int]:
        n = len(nums)
        nums.sort()
        i = 0;
        j = 1;
        ans = []
        while j<n:
            ans.extend([nums[j],nums[i]])
            i+=2
            j+=2

        if j==n:
            ans.append(nums[n-1])


        return ans    




