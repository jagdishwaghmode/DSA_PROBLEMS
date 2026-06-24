class Solution {
public:
    string sumOfDigits(string& num){

        int n = num.size();
        int sum = 0;
        for(int i = 0; i<n; i++){
            char c = num[i];
            sum+=c-'0';
        }
        string ans = to_string(sum);
        return ans;

    }
    int getLucky(string s, int k) {
        string num;
        int x = 0;
        for(int i = 0; i<s.size(); i++){
            int n = s[i]-'a'+1;
            string c = to_string(n);
            num+=c;
        }
        string ans;
        for(int i = 0; i<k; i++){
            ans = sumOfDigits(num);
            num = ans;
        }

        int res = stoi(ans);
        return res;
    }
};