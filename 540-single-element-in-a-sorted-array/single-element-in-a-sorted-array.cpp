class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int i = 0;
        int j = nums.size() - 1;
        int n=nums.size();
        if(n==1) return nums[0];
        while (i <= j) {
            int mid = i + (j - i) / 2;
            cout<<mid<<endl;
            int occ ;
            if(mid == 0){
                occ = (nums[mid] == nums[mid+1]) ? 1 : 0;
            }
            else if(mid == n-1){
                occ = nums[mid] == nums[mid-1] ? 2 : 0;
            }
            else{
                occ = nums[mid]==nums[mid-1] ? 2 : nums[mid] == nums[mid+1] ? 1 : 0;
            }

            if(occ == 0) return nums[mid];

            
            if((occ == 2 && (mid%2 == 0)) ||  (occ==1 && (mid%2))){
                //left
                j = mid-1;
            }
            else i = mid+1;

        }
        return 0;
    }
};