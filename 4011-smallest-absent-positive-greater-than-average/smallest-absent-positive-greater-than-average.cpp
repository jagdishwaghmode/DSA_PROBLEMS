class Solution {
public:
    int smallestAbsent(vector<int>& nums) {
        unordered_set<int> s;
        int sum = 0;
        int n = nums.size();
        for(int i = 0; i<n; i++){
            s.insert(nums[i]);
            sum+=nums[i];
        }  
        int avg = sum/n;
    
    if(avg<0){
       for(int i = 1; i<INT_MAX; i++){
        if(s.find(i)!=s.end()){
            avg++;
        }
        else{
            return i;
        }
    } 
    }
    else{

    for(int i = avg+1; i<INT_MAX; i++){
        if(s.find(i)!=s.end()){
            avg++;
        }
        else{
            return i;
        }
    }
    }
    return -1;
    }
};