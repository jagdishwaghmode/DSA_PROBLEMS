class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        int n = str1.length();
        int m = str2.length();
        string s1 = str1+str2;
        string s2 = str2+str1;
        if(s1!=s2){
            return "";
        }
        int size = gcd(n,m);
        string ans;
        for(int i = 0; i<size; i++){
            ans.push_back(str1[i]);
        }
        return ans;
    }
};