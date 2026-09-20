class Solution {
public:
    int reverseDegree(string s) {
        int sum = 0;
        for(int i = 0; i<s.size(); i++){
            int num = 123-s[i]-0;
            sum+=(num*(i+1));
        }
        return sum;
    }
};