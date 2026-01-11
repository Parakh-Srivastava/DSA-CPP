#include <vector>
using namespace std;

class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {

        if (prices.empty())
            return 0;

        int min_price = prices[0], max_profit = 0;
        for (int i = 0; i < prices.size(); i++)
        {
            if (prices[i] < min_price)
            {
                min_price = prices[i];
            }
            int curr_profit = prices[i] - min_price;
            if (curr_profit > max_profit)
            {
                max_profit = curr_profit;
            }
        }
        return max_profit;
    }
};