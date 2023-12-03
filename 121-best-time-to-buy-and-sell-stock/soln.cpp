#include "soln.hpp"

int Solution::maxProfit(vector<int> &prices)
{
	if (prices.size() == 1)
		return 0;
	int max_profit = 0, buying_day = 0, cur_profit = 0;
	for (int i = 0; i < prices.size(); i++)
	{
		// cheaper buy day
		if (prices[i] < prices[buying_day])
			buying_day = i;
		cur_profit = prices[i] - prices[buying_day];
		// more profit
		if (max_profit < cur_profit)
			max_profit = cur_profit;
	}
	return max_profit;
}

bool Solution::test(vector<int> &prices, int answer)
{
	return maxProfit(prices) == answer;
}
