class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        vector<string> ans;
        int n = s.size();
        int cntOne = 0;
        for(int i = 0; i<n; i++){
            cntOne = 0;
            for(int j =i;j<n;j++){
                if(s[j]=='1'){
                    cntOne++;
                }
                if(cntOne==k){
                    string sub = s.substr(i,j-i+1);
                    ans.push_back(sub);
                }
            }
        }
        if(ans.empty()){
            return "";
        }
        sort(ans.begin(),ans.end());
        string res = "";
        int min = ans[0].size();
        int idx = 0;
        for(int i = 1; i<ans.size(); i++){
            int x = ans[i].size();
            if(x<min){
                idx = i;
                min = x;
            }
        }
        return ans[idx];
    }
};