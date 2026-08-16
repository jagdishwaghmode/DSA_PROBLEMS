class Solution:
    def nearestDrone(self, drones: list[list[int]], target: list[int]) -> int:
        n = len(drones)
        ans = -1
        minRange = 101
        for i in range(0,n):
            a = drones[i]
            x = a[0]
            y = a[1]
            r = a[2]
            dis = abs(target[0]-x)+abs(target[1]-y)
            if dis<=r:
                if dis<minRange:
                    minRange = dis
                    ans = i

         
        return ans
            
