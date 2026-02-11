class Solution {
public:
    int vowelConsonantScore(string s) {
        int ans;
        int vowel = 0;
        int cons = 0;
        
        for (char x : s) {
            if (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u' ||
                x == 'A' || x == 'E' || x == 'I' || x == 'O' || x == 'U') {
                    vowel++;
            } else if(x>='a'&&x<='z') {
                cons++;
            }
            else{
                continue;
            }
        }
        if(cons==0){
            return 0;
        }
        ans = vowel/cons;
        return ans;
    }
};