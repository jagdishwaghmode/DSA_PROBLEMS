class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char,int> mpp;
        for(int i = 0; i<text.size(); i++){
                mpp[text[i]]++;
        }


        return min({
            mpp['b'],
            mpp['a'],
            mpp['l']/2,
            mpp['o']/2,
            mpp['n']
        });
    }
};