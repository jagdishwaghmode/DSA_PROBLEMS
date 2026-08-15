class Solution:
    def elevatorRequests(self, n: int, requests: list[int]) -> int:
        ans = requests[0]
        x = len(requests)
        for i in range(1,x):
            ans=ans+abs(requests[i-1]-requests[i])

        return ans