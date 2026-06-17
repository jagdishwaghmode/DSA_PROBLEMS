class Solution {
public:
    bool checkGoodInteger(int n) {
        long long sum = 0;
        long long squareSum = 0;
        while(n!=0){
            int dig = n%10;
            sum+=dig;
            squareSum+=(dig*dig);
            n = n/10;
        }

        return (squareSum-sum)>=50;
    }
};