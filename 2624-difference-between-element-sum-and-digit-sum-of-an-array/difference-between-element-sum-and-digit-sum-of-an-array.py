class Solution:
    def sumDigit(self,i):
        digSum = 0
        while i>0:
            dig = i%10
            digSum+=dig
            i = i//10

        return digSum
        
    def differenceOfSum(self, nums: List[int]) -> int:
        eleSum = sum(nums)
        digitSum = 0
        for i in nums:
            digitSum+=self.sumDigit(i)

        return abs(digitSum-eleSum)
    
        