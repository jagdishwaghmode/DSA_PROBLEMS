class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        n = len(nums)
        mpp = {}
        
        for i in range(n):
            rem = target - nums[i]
            if rem in mpp:
                return [mpp[rem], i]

            mpp[nums[i]] = i

        return []