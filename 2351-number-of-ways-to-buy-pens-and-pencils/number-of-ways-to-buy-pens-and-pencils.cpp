class Solution {
public:
    long long waysToBuyPensPencils(int total, int cost1, int cost2) {
        long long ans = 0;
        int x = max(cost1,cost2);
        int y = min(cost1,cost2);
        int n = total/x;
        for(int i = 0; i<=n; i++){
            ans+=((total-i*x)/y)+1;
        }
        return ans;
    }
};