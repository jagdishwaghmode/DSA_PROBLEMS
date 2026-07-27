class Solution {
public:
    int largestInteger(int n, int s) {
        if(s>n*9){
            return -1;
        }
        else if(s==0){
            return 0;
        }

        int sum  = 0;
        string num = "";
        int i = 0;
        while(i<n||s){
            int dig = min(s,9);
            s-=dig;
            num+=dig+'0';
            i++;
        }
        for(int j = i; j<n; j++){
            num.push_back('0');
        }

        int ans = stoi(num);
        return ans;
    }
    
};