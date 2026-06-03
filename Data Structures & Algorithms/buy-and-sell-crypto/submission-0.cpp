class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxprofit = 0 ; 
        int minbuy = prices[0];

        for(int i = 0 ; i<prices.size();i++){
            maxprofit = max(maxprofit , prices[i]-minbuy);
            minbuy = min(minbuy, prices[i]);
        }
        return maxprofit;
    }
};
