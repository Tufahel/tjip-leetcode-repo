class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // T C = O(N)
        // M C = O(1)
        int min_price = 100005, today_profit = 0, max_profit = 0;
        for(auto price : prices){
            if(min_price > price) min_price = price;
            today_profit = price - min_price;
            if(today_profit > max_profit) max_profit = today_profit; 
        }
        return max_profit;
    }
};