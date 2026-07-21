class Solution {
public:
    long long maximumValue(int n, int s, int m) {
        if(n==1) return s;
        return 1LL*((s+m)+1LL*(m-1)*((n/2)-1));
    }
};