class Solution {
public:
    bool checkPalindrome(string bin){
        int i = 0;
        int j = bin.size()-1;
        while(j>=i){
            if(bin[i]!=bin[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
    bool isPalindromic(string s) {
        string bin;
        for(int i = 0; i<s.size(); i++){
            char ascii = s[i];
            string binary = bitset<8>(ascii).to_string();
            bin+=binary;
        }
        return checkPalindrome(bin);
    }
};