class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(int i = 0; i<s.size(); i++){
            if(s[i]==')'&&!st.empty()&&st.top()=='('){
                st.pop();
            }
            else if(s[i]==']'&&!st.empty()&&st.top()=='['){
                st.pop();
            }
            else if(s[i]=='}'&&!st.empty()&&st.top()=='{'){
                st.pop();
            }
            else{
                st.push(s[i]);
            }
        }
        return st.empty();
    }
};