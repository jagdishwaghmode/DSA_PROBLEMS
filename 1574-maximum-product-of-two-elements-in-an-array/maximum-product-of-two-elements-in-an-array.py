class Solution:
    def maxProduct(self, nums: List[int]) -> int:
        nums.sort()
        n = len(nums)
        a = nums[n-1]-1
        b = nums[n-2]-1

        return a*b
        