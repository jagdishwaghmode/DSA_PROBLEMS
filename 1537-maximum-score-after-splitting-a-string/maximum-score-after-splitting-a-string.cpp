class Solution {
public:
    int maxScore(string s) {
        int maxiScore = 0;
        int cnt0 = 0;
        int cnt1 = 0;
        int n = s.size();
        for(int i = 0; i<n-1; i++){
            if(s[i]=='0'){
                cnt0++;
            }
            for(int j = i+1; j<n; j++){
                if(s[j]=='1'){
                    cnt1++;
                }
            }
            maxiScore = max(maxiScore,cnt1+cnt0);
            cnt1 = 0;
        }
        return maxiScore;
    }
};