class Solution {
public:
    string removeStars(string s) {
        stack<char> st;
        int n = s.size();
        for(int i = 0; i<n; i++){
            if(s[i]!='*'){
                st.push(s[i]);
            }
            if(s[i]=='*'&&!st.empty()){
                st.pop();
            }
        }
        string ans = "";
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());

        return ans;

    }
};