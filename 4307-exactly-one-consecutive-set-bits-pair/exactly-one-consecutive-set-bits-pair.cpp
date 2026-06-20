class Solution {
public:
    bool consecutiveSetBits(int n) {
        string binary;

        if(n == 0) binary = "0";

        while(n != 0){
            int rem = n % 2;
            binary.push_back(rem + '0');
            n = n / 2;
        }
        cout<<binary;
        int x = binary.length();
        int cnt1 = 0;
        int cnt0 = 0;
        for(int i = 0; i < x - 1; i++){
            if(binary[i] == '1' && binary[i+1] == '1'){
                cnt1++;
            }
            if(binary[i] == '0' && binary[i+1] == '0'){
                cnt0++;
            }
        }

        return (cnt1==1);
    }
};