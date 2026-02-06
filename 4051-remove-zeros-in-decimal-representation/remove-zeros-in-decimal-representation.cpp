class Solution {
public:
    long long removeZeros(long long n) {
        string num = to_string(n);
        int size = num.length();
        string ans;

        for(int i = 0; i<size; i++){
            if(num[i]=='0'){
                continue;
            }
            else{
                ans+=num[i];
            }
        }
        return stol(ans);
    }
};