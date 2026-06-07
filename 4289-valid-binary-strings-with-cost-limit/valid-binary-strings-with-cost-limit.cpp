class Solution {
    private:
    void generate(string& s,int i,int n,vector<string>& combinations){
        if(i==n){
            combinations.push_back(s);
            return;
        }
        s[i] = '0';
        generate(s,i+1,n,combinations);

        s[i]='1';
        generate(s,i+1,n,combinations);
    }

    vector<int> getCost(vector<string> combinations,int n){
        vector<int> cost;
        int sum = 0;
        for(int i  = 0; i<combinations.size(); i++){
                string s = combinations[i];
                sum = 0;
                for(int j = 0; j<n; j++){
                    if(s[j]=='1'){
                        sum+=j;
                    }
                }
                cost.push_back(sum);
        }
        return cost;
    }
    vector<string> valid(vector<string> combinations,vector<int> cost,int k){
        vector<string> ans;
        for(int i = 0; i<combinations.size(); i++){
            string s = combinations[i];
            int flag = 0;
            for(int j = 0; j<s.size()-1; j++){
                if(s[j]=='1'&&s[j+1]=='1'){
                    flag = 1;
                    break;    
                }
            }
            if(flag == 0&&cost[i]<=k){
                ans.push_back(s);
            }
        }
        return ans;
    }
public:
    vector<string> generateValidStrings(int n, int k) {
        string s(n, '0');
        vector<string> combinations;
        generate(s, 0, n,combinations);
        vector<int> cost;
        cost = getCost(combinations,n);
        vector<string> ans;
        ans = valid(combinations,cost,k);

        return ans;
    }
};