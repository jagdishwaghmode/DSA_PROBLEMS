class Solution {
public:
    int maxProduct(int n) {
        string num = to_string(n);
        sort(num.begin(),num.end());
        int number = stoi(num);
        int pro = 1;
        int lastDig = number%10;
        number = number/10;
        int secLastDig = number%10;

        return lastDig*secLastDig;
    }
};