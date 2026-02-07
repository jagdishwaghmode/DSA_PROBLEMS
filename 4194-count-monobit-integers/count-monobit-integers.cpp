class Solution {
public:
    int countMonobit(int n) {
        long long num = 0;
        int i  = 0;
        int cnt = 0;
        if(n==1)return 2;
        while(num<=n){
            num += pow(2,i);
            cnt++;
            i++;
        }
        return cnt;
    }
};