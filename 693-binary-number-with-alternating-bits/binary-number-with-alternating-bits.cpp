class Solution {
public:
    bool hasAlternatingBits(int n) {
        vector<int> bin;
        while(n>0){
            bin.push_back(n%2);
            n = n/2;
        }
        int i = 0;
        for(int j = 1; j<bin.size(); j++){
            if(bin[i]+bin[j]!=1){
                return false;
            }
            i++;
        }
        return true;
    }
};