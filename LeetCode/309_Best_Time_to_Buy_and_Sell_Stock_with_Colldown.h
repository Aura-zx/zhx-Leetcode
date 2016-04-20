#ifndef BEST_TIME_TO_BUY_AND_SELL_STOCK_WITH_COOLDOWN_H
#define BEST_TIME_TO_BUY_AND_SELL_STOCK_WITH_COOLDOWN_H

#include <algorithm>
#include <vector>

class Solution_309
{
public:
	int maxProfit(std::vector<int>& prices)
	{
		if (prices.size( ) < 2)
			return 0;

		int sz = prices.size( );
		int ret = 0;
		std::vector<int> buy(sz, 0);
		std::vector<int> sell(sz, 0);
		buy[0] = -prices[0];
		for (int i = 1; i < sz; i++)
		{
			// 看着很相似，但主要的区别在于前一天的状态是买还是卖
			// 前一天买的今天卖和前一天不卖今天卖，即cooldown一天
			sell[i] = std::max(buy[i - 1] + prices[i], sell[i - 1] - prices[i - 1] + prices[i]);
			if (ret < sell[i])
				ret = sell[i];
			if (i == 1)
				buy[i] = buy[0] + prices[0] - prices[1];
			else
				buy[i] = std::max(sell[i-2]-prices[i], buy[i-1]+prices[i-1]-prices[i]);
			// 空了一天买和前一天没买今天买
		}

		return ret;
	}
};
#endif // !BEST_TIME_TO_BUY_AND_SELL_STOCK_WITH_COOLDOWN_H
