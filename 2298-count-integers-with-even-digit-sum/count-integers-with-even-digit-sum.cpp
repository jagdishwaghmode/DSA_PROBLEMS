class Solution {
public:
    int countEven(int num) {
        int sum = 0;
        int count = num;
        while(num > 0){
            int temp = num%10;
            sum += temp;
            num = num/10;
        }
        if(sum % 2 == 0) return count/2;
        return (count-1)/2;
    }
};