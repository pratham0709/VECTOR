class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxpro = 0;
        int minprice = INT_MAX;
        for(int i = 0; i<prices.size(); i++){
            if(prices[i]<minprice){
                minprice = prices[i];
            }
            else if(prices[i] - minprice > maxpro){
                maxpro = prices[i] - minprice ;
            }
            
        }
        return maxpro;
    }
};
