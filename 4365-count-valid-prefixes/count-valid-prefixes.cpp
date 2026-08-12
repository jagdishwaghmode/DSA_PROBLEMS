class Solution {
public:
    int countValidPrefixes(string s) {
        int cnt = 0;
        unordered_map<char,int> mpp;
        int n = s.size();
        for(int i = 0; i<n; i++){
            mpp[s[i]]++;
            if(abs(mpp['1']-mpp['0'])<2){
                cnt++;
            }
        }
        return cnt;
    }
};