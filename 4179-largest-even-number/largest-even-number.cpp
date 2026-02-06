class Solution {
public:
    string largestEven(string s) {
        int n = s.length();
        for(int i = 0; i<n; i++){
             int lastDigit = s.back() - '0';
            if(lastDigit%2==0){
                return s;
            }
            else{
                s.pop_back();
            }
        }
        return s;
    }
};