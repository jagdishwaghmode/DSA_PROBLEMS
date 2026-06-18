class Solution {
public:
    int digitFrequencyScore(int n) {
        vector<int>freq(10,0);
        while(n!=0){
            int dig = n%10;
            freq[dig]++;
            n = n/10;
        }
        int ans = 0;
        for(int i = 0; i<10; i++){
            ans+=freq[i]*i;
        }
        return ans;
    }
};