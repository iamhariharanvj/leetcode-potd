class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        int min1=INT_MAX,min2=INT_MAX;
        for(int price:prices){
            if(min1>=price){
                min2=min1;                
                min1=price;
            }
            else if(min2>=price){
                min2=price;
            }
        }
        return money-min1-min2>=0?money-min1-min2:money;
    }
};