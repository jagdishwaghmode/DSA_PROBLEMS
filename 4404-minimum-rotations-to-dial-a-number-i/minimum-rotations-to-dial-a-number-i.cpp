
class Solution {
public:
    int minRotations(string s) {
        int n = s.size();

        int ans = 0;
        int i = 0;
        int j = 0;

        int diff = abs(0 - (s[j] - '0'));
        ans += min(diff, 10 - diff);
        j++;

        while(j < n) {
            int curr = s[j] - '0';
            int prev = s[i] - '0';

            diff = abs(prev - curr);
            ans += min(diff, 10 - diff);

            i++;
            j++;
        }

        return ans;
    }
};
