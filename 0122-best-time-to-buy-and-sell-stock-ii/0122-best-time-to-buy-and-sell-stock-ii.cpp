class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min_buy = prices[0];
        int max_profit = 0;
        for(int i=0;i<prices.size();i++){
            if(prices[i]>min_buy){
                max_profit += prices[i]-min_buy;
                min_buy = prices[i];
            }else{
                min_buy = prices[i];
            }
        }
        return max_profit;
    }
};