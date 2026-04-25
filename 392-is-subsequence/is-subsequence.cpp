class Solution {
    string s, t;
    vector<vector<int>> dp;
    bool solve(string s, string t, int i, int j){
        if(i == s.size()) return true;
        if(j >= t.size()) return false;

        if(dp[i][j] != -1) return dp[i][j];

        if(s[i] == t[j]) return dp[i][j] = solve(s,t,i+1,j+1);
        return dp[i][j] = solve(s,t,i,j+1);
    }
public:
    bool isSubsequence(string s, string t) {
        dp.resize(s.size(), vector<int>(t.size(), -1));
        return solve(s,t,0,0);
    }
};