class Solution {

    void solve(string digits,string mapping[],int i,vector<string>& ans,string output){
        if(i>=digits.size()){
            ans.push_back(output);
            return;
        }
        int num = digits[i]-'0';
        string value = mapping[num];
        for(int j = 0; j<value.size(); j++){
            output.push_back(value[j]);
            solve(digits,mapping,i+1,ans,output);
            output.pop_back();
        }
    }
public:
    vector<string> letterCombinations(string digits) {
        string mapping[10] = {
            "",
            "",
            "abc",
            "def",
            "ghi",
            "jkl",
            "mno",
            "pqrs",
            "tuv",
            "wxyz"
        };
        string output;
        vector<string> ans;
        int i = 0;
        
        solve(digits,mapping,i,ans,output);
        return ans;
    }
};