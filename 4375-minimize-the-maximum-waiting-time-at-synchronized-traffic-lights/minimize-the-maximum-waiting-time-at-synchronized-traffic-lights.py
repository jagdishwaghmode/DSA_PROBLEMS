class Solution:
    def minPenalty(self, period: int, lights: list[int], arrivalTime: list[int]) -> int:
        maxLight = max(lights)
        n = len(arrivalTime)
        ans = []
        for i in range(0,n):
            rem = arrivalTime[i]%period
            if rem<maxLight:
                ans.append(0)
            else:
                ans.append(period-rem)

        return max(ans)