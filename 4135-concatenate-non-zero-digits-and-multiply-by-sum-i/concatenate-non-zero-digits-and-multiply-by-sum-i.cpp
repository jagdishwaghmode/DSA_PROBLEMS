class Solution {
public:
    long long sumAndMultiply(int n) {
        if(n==0){
            return 0;
        }
        string num;
        int sum = 0;
        while(n>0){
            int dig = n%10;
            sum+=dig;
            if(dig!=0){
            num.push_back(dig+'0');
            }
            n = n/10;
        }
        reverse(num.begin(),num.end());
        long long number = stoll(num);
        long long ans = number*sum;

        return ans;
    }
};