class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int minimum = INT_MAX;
        int n = nums1.size();
        int cntEven = 0;
        for(int i = 0; i<n; i++){
            if(minimum>nums1[i]){
                minimum = nums1[i];
            }

            if(nums1[i]%2==0){
                cntEven++;
            }
        }

        if(minimum%2!=0){
            return true;
        }
        if(cntEven==n){
            return true;
        }


        return false;
    }
};