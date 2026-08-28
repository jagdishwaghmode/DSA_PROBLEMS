class Solution {
public:
    int maxCoins(vector<int>& piles) {
        int n = piles.size();
        int ans = 0;
        sort(piles.rbegin(),piles.rend());
        int j = n-1;
        // for(int i = 0; i<n; i+2){
        //     if(i%3==1){
        //         ans+=piles[i];
        //         j--;
        //     }
        // }

        for(int i=1;i<n;i+=2){
            if(i>j) break;
            ans+=piles[i];
            j--;
        }

        return ans;
    }
};

//9 8 7 6 5 4 3 2 1
//0 1 2 3 4 5 6 7 8

//8 7 4 2 2 1