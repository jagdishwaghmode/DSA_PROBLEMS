class Solution {
public:
    int minimumSum(int num) {
        string nums = to_string(num);
        sort(nums.begin(),nums.end());

        int num1 = ((nums[0]-'0')*10+nums[3]-'0');
        int num2 = ((nums[1]-'0')*10+nums[2]-'0');
        
        return num1+num2;
    }
};