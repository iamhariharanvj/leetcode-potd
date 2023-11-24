class Solution {
public:
    int maxCoins(vector<int>& piles) {
        sort(piles.begin(), piles.end());

        int n = piles.size();
        int sum = 0;
        for(int i=n-2, j=1; j<=n/3; i-=2,j++){
            sum += piles[i];
        }
        return sum;
    }
};