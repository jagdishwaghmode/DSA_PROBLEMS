class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxi = candies[0];
        int n = candies.size();
        for(int i = 1; i<n;i++){
            if(candies[i]>maxi){
                maxi  = candies[i];
            }
        }
        vector<bool> ans;
        for(int i = 0; i<n; i++){
            int sum = candies[i]+extraCandies;
            if(sum>=maxi){
                ans.push_back(true);
            }
            else{
                ans.push_back(false);
            }
        }
        return ans;
    }
};