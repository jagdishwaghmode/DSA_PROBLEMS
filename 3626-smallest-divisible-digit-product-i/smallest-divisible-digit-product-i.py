class Solution:
    def solve(self, i, t):
        num = str(i)

        if len(num) == 1:
            dig = int(num[0])
            if dig % t == 0:
                return i
            return 0   # IMPORTANT: stop here for single digit

        dig1 = int(num[0])
        dig2 = int(num[-1])

        if (dig1 * dig2) % t == 0:
            return i
        
        return 0

    def smallestNumber(self, n: int, t: int) -> int:
        i = n
        while True:
            ans = self.solve(i, t)
            if ans:
                return ans
            i += 1