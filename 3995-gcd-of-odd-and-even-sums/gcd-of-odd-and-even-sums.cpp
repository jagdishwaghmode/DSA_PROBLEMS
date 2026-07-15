class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int x = n*2;
        int sumOdd = 0;
        int sumEven = 0;
        for(int i = 1; i<=x; i++){
            if(i%2==0){
                sumEven+=i;
            }
            else{
                sumOdd+=i;
            }
        }
        return gcd(sumOdd,sumEven);
    }
};