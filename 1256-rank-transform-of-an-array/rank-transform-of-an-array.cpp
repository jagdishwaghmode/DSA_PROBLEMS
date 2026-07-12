class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        int n = arr.size();
        if(n == 0) return {};

        vector<int> arr1 = arr;
        sort(arr1.begin(), arr1.end());

        unordered_map<int,int> mpp;
        int rank = 1;

        for(int i = 0; i < n; i++){
            if(mpp.find(arr1[i]) == mpp.end()){
                mpp[arr1[i]] = rank;
                rank++;
            }
        }

        vector<int> ans;
        for(int i = 0; i < n; i++){
            ans.push_back(mpp[arr[i]]);
        }

        return ans;
    }
};