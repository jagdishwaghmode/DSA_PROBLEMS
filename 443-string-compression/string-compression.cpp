class Solution {
public:
    int compress(vector<char>& chars) {
            vector<char> copy = chars;
            chars.clear();
            for(int i = 0; i<copy.size(); i++){
                int j = i+1;
                while(j<copy.size()&&copy[j]==copy[j-1]){
                    j++;
                }
                int len = j-i;
                chars.push_back(copy[i]);
                    if(len==1){
                        continue;
                    }
                    string temp = to_string(len);
                    for(int j = 0; j<temp.size(); j++){
                        chars.push_back(temp[j]);
                    }
                    i = j-1;
            }
            return chars.size();
    }
};