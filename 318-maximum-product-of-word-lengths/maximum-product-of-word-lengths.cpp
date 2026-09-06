class Solution {
public:
    int maxProduct(vector<string>& words) {
        int n = words.size() ;
        int maxlen = 0 ;
        sort(words.begin() , words.end()) ;
        for(int i = 0 ; i < n ; i++){
           map<char , int> mpp ;
           for(char ch : words[i]) mpp[ch]++ ;
           for(int j = i+1 ; j < n ; j++){
            int cnt = 0  ;
              for(int k = 0 ; k < words[j].size() ; k++){
                if(mpp.find(words[j][k]) != mpp.end()) break ;
                cnt++ ;
              }
              if(cnt == words[j].size()){
                int p  = words[i].size()*words[j].size() ;
                maxlen = max(maxlen , p) ;
              }
           } 
        }
        return maxlen ;
    }
};