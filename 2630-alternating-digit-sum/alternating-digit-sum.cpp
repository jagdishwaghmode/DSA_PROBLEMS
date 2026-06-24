class Solution {
public:
    int alternateDigitSum(int n) {
        string num = to_string(n);
        int x = num.size();
        int sum = 0;
        for(int i= 0; i<x; i++){
            if(i%2==0){
                sum+=num[i]-'0';
            }
            else{
                sum-=num[i]-'0';
            }
        }
        return sum;
    }
};