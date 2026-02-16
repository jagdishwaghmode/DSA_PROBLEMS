class Solution {
public:
    vector<int> toggleLightBulbs(vector<int>& bulbs) {
        vector<int> ans;
        unordered_map<int,int> mpp;
        for(int i = 0; i<bulbs.size(); i++){
            mpp[bulbs[i]]++;
        }
        for(auto it:mpp){
            if(it.second%2==1){
                ans.push_back(it.first);
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};