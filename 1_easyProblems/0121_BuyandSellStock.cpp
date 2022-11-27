class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
        int maxProfit = 0;
        for(int i = 0; i<prices.size(); i++)
        {
            for(int j = i; j<prices.size(); j++)
            {
                if(prices[j]-prices[i] > maxProfit)
                {
                    maxProfit = prices[j]-prices[i];
                }
            }
        }
        return maxProfit;
    }
};