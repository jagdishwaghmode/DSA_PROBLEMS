class Solution {
public:
    vector<long long> mergeAdjacent(vector<int>& nums) {
        vector<long long> ans;
        if(nums.empty()) return ans;

        stack<long long> st;

        for(int x : nums) {
            long long curr = x;

            while(!st.empty() && st.top() == curr) {
                curr += st.top();
                st.pop();
            }
            st.push(curr);
        }

        while(!st.empty()) {
            ans.push_back(st.top());
            st.pop();
        }

        reverse(ans.begin(), ans.end());
        return ans;
    }
};
