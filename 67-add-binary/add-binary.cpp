class Solution {
public:
    string addBinary(string a, string b) {
        int m = a.size()-1;
        int n = b.size()-1;

        int sum = 0;
        int carry = 0;

        string result = "";

        while(m>=0||n>=0){
            sum = carry;
            if(m>=0){
                sum+= a[m]-'0';
                m--;
            }

            if(n>=0){
                sum+=b[n]-'0';
                n--;
            }

            result.push_back((sum%2==0)?'0':'1');
            carry = sum/2;
        }

        if(carry){
            result.push_back('1');
        }
        reverse(result.begin(),result.end());
        return result;
    }
};