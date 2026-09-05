class Solution {
public:
    int titleToNumber(string columnTitle) {
        unordered_map<char,int> mpp;
        char ch = 'A';
        for(int i = 1; i<=26; i++){
            mpp[ch] = i;
            ch++;
        }
        int n = columnTitle.size();
        reverse(columnTitle.begin(),columnTitle.end());
        int ans = 0;
        for(int i = 0; i<n; i++){
            ans+=(mpp[columnTitle[i]]*pow(26,i));
        }
        return ans;
    }
};
