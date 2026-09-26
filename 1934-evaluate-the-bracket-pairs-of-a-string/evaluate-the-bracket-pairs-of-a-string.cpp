class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        string ans;
        unordered_map<string,string> mpp;
        int n = knowledge.size();
        for(int i = 0; i<n; i++){
            mpp[knowledge[i][0]]=knowledge[i][1];
        }
        int x = s.size();
        for(int i = 0; i<x; i++){
            if(s[i]=='('){
                int j = i;
                while(j<x && s[j]!=')'){
                    j++;
                }
                string Sub = s.substr(i+1,j-i-1);
                if(mpp.find(Sub)==mpp.end()){
                    ans+='?';
                }
                else{
                ans+=mpp[Sub];
                }
                i=j;
            }
            else{
                ans+=s[i];
            }
        }
        return ans;
    }
};