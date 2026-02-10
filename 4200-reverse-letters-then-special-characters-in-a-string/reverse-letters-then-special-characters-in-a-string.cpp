#include <string>
class Solution {
public:
    string reverseByType(string s) {
        string s2 = s;
        reverse(s2.begin(), s2.end());
        string C;
        string L;
        for(int i = 0; i<s2.length(); i++){
            if(s2[i]>=97&&s2[i]<=122){
                L+=s2[i];
            }
            else{
                C+=s2[i];
            }
        }
        string ans;
        int k = 0;
        int j = 0;
        for(int i = 0;i<s.length(); i++){
            if(s[i]>=97&&s[i]<=122){
                ans+=L[k];
                k++;
            }
            else{
                ans+=C[j];
                j++;
            }
        }
        return ans;
    }
};