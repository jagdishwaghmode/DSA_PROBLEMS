class Solution {
public:
    int trap(vector<int>& height) {
        stack<int> st;
        int ans = 0;
        int n = height.size();

        for (int i = 0; i < n; i++) {

            while (!st.empty() && height[i] > height[st.top()]) {
                
                int bottom = st.top();
                st.pop();

                if (st.empty()) {
                    break;
                }

                int left = st.top();

                int width = i - left - 1;

                int boundedHeight = min(height[left], height[i]) 
                                  - height[bottom];

                ans += width * boundedHeight;
            }

            st.push(i);
        }

        return ans;
    }
};