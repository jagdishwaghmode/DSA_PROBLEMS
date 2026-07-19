class Solution {
public:
    string rearrangeString(string s, char x, char y) {
        string tx="";
        string ty="";
        string t="";
        for(auto c:s){
            if(x==c)tx+=c;
            else if(y==c)ty+=c;
            else t+=c;
        }
        return t+ty+tx;
    }
};