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
			// ���ź����ƣ�����Ҫ����������ǰһ���״̬��������
			// ǰһ����Ľ�������ǰһ�첻������������cooldownһ��
			sell[i] = std::max(buy[i - 1] + prices[i], sell[i - 1] - prices[i - 1] + prices[i]);
			if (ret < sell[i])
				ret = sell[i];
			if (i == 1)
				buy[i] = buy[0] + prices[0] - prices[1];
			else
				buy[i] = std::max(sell[i-2]-prices[i], buy[i-1]+prices[i-1]-prices[i]);
			// ����һ�����ǰһ��û�������
		}

		return ret;
	}
};
#endif // !BEST_TIME_TO_BUY_AND_SELL_STOCK_WITH_COOLDOWN_H
