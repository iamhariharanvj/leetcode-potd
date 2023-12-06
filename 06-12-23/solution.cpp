class Solution {
public:
    int totalMoney(int n) {
        return (28*(n/7))+((n%7)*((n%7)+1)/2)+((7*(n/7)*((n/7)-1))/2)+((n/7)*(n%7));
    }
};