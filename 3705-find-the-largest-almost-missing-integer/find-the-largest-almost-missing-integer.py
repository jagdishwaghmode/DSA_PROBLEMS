class Solution:
    def largestInteger(self, nums: List[int], k: int) -> int:
        n = len(nums)
        mpp = {}
        for i in nums:
            mpp[i] = mpp.get(i,0)+1

        if k==1:
            nums.sort(reverse=True)
            for i in nums:
                if mpp[i]==1:
                    return i

            return -1

        if k == n:
            return max(nums)

        if mpp[nums[0]]==1 and mpp[nums[n-1]]==1:
            return max(nums[0],nums[n-1])

        if mpp[nums[0]]>1 and mpp[nums[n-1]]>1:
            return -1

        if mpp[nums[0]]>1:
            return nums[n-1]

        if mpp[nums[n-1]]>1:
            return nums[0]

        

    