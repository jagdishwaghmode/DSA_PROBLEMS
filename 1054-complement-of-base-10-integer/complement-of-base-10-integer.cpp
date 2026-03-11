class Solution {
public:
    int bitwiseComplement(int n) {

        if(n == 0) return 1;

        string comp;

        while(n > 0){
            int bit = n % 2;
            n = n / 2;

            if(bit == 1){
                comp.push_back('0');
            }
            else{
                comp.push_back('1');
            }
        }

        int num = 0;

        for(int i = 0; i < comp.size(); i++){
            if(comp[i] == '1'){
                num += pow(2, i);
            }
        }

        return num;
    }
};