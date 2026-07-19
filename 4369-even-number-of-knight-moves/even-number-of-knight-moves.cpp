class Solution {
public:
    bool canReach(vector<int>& start, vector<int>& target) {
        int dis1 = abs(target[0]-start[0]);
        int dis2 = abs(target[1]-start[1]);

        return ((dis1+dis2)%2==0);
    }
};