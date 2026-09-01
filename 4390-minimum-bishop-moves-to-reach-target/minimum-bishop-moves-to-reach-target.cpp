class Solution {
public:
    int minBishopMoves(vector<int>& source, vector<int>& target) {
       int sDiff = abs(source[0]-source[1]);
       int tDiff = abs(target[0]-target[1]);

       if(sDiff%2!=tDiff%2){
        return -1;
       } 

       if(abs(target[0]-source[0])==abs(target[1]-source[1])){
        return 1;
       }

       return 2;
    }
};