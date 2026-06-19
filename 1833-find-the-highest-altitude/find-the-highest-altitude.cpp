class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int> prefix;
        int sum = 0;
        prefix.push_back(0);
        for(int i = 0; i<gain.size(); i++){
            sum+=gain[i];
            prefix.push_back(sum);
        }
        int maxi = prefix[0];
        for(int i = 1; i<prefix.size(); i++){
            if(prefix[i]>maxi){
                maxi = prefix[i];
            }
        }
        return maxi;
    }
};