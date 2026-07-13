class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        string num;
        set<int> res;

        for (int j = 1; j <= 9; j++) {   
            num = "";
            for (int i = j; i <= 9; i++) {
                num += (i + '0');        

                int val = stoi(num);     
                if (val > high) break;   

                if (val >= low && val <= high) {
                    res.insert(val);
                }
            }
        }

        return vector<int>(res.begin(), res.end());
    }
};