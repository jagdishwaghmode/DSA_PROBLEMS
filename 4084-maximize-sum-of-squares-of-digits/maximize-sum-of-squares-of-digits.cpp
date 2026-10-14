class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        string s="";
        while(num>0){
            s+=min(9,sum)+'0';
            sum-=min(9,sum);
            num--;
        }
        if(sum==0)return s;
        else return "";
    }
};