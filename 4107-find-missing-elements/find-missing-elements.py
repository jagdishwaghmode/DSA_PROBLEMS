class Solution:
    def findMissingElements(self, nums: List[int]) -> List[int]:
        nums.sort()
        n = len(nums)
        ans = []
        small = nums[0]
        large = nums[n-1]

        for i in range(small,large):
            if i in nums:
                continue
            else:
                ans.append(i)
            

        return ans
            