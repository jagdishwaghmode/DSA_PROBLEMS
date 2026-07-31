class Solution {
public:
    int minimumPushes(string word) {
        // sort(word.begin(), word.end());
        unordered_map<char,int> mp;
        int n = word.size();
        for(int i=0; i<n; i++){
            mp[word[i]]++;
        }   
        vector<int> nums;
        for(auto it: mp){
            // pair<int,char> p;
            // p = {it.second, it.first};
            nums.push_back(it.second);
        } 
        sort(nums.rbegin(),nums.rend());
        int cnt=0;
        int ans=0;
    //    int ans=nums.size();
    //    for(int i = 0; i<ans; i++){
    //     if(i<8){
    //         cnt+=nums[i].first;
    //     }
    //     if(i>=8&&i<16){
    //         int cnt2 = 0;
    //         cnt2+=nums[i].first;
    //     }
    //     cnt+=2*cnt2;
    //     if(i>=16&&i<24){
    //         int cnt3 = 0;
    //         cnt3+=nums[i].first;
    //     }
    //     cnt+=cnt3*3;
    //     if
    //    }
        for(int i=0;i<nums.size();i++){
            if(i%8==0)cnt++;
            ans+=nums[i]*cnt;
        }
        return ans;
    }
};