class Solution {
public:

    bool checkBalanced(vector<int>& hash){
        int common = 0;
        for(int i = 0; i<26; i++){
            if(hash[i]==0){
                continue;
            }

            if(common==0){
                common = hash[i];
            }
            else if(hash[i]!=common){
                return false;
            }

        }
        return true;
    }

    int longestBalanced(string s) {
        int n = s.size();
        int maxL = 0;
        for(int i = 0; i<n; i++){
            vector<int> hash(26,0);
            for(int j = i; j<s.size(); j++){
                hash[s[j]-'a']++;
                if(checkBalanced(hash)){
                    maxL = max(maxL,j-i+1);
                }
            }
        }
        return maxL;
    }
};