class Solution {
public:
    string reverseWords(string s) {
        int n = s.size();
        int i = 0;
        int j = 0;
        vector<string> words;

        while (j < n && s[j] == ' ') {
            j++;
            i = j;
        }
            
        while (j <= n) {
            if (j == n || s[j] == ' ') {
                if (i < j) {
                    words.push_back(s.substr(i, j - i)); 
                }
                while (j < n && s[j] == ' ') { 
                    j++;
                }
                i = j;
            }
            j++;
        }
        reverse(words.begin(), words.end());

        string ans = "";
        for (int k = 0; k < words.size(); k++) {
            ans += words[k];
            if (k != words.size() - 1) ans += " ";
        }

        return ans;
    }
};