class Solution:
    def missingInteger(self, nums: List[int]) -> int:
        sum = nums[0]
        n = len(nums)
        for i in range(1,n):
            if nums[i-1]+1==nums[i]:
                sum+=nums[i]
            else:
                break

        while sum in nums:
            sum+=1

        return sum
        