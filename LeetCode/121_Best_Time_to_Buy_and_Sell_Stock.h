#ifndef Best_Time_to_Buy_and_Sell_Stock_H
#define	Best_Time_to_Buy_and_Sell_Stock_H

#include <vector>

class Solution_121
{
public:
	int maxProfit(std::vector<int>& prices)
	{
		if (prices.empty( ))
			return 0;

		int min = prices[0];
		int ans = 0;

		for (int i = 1; i < prices.size( ); i++)
		{
			if (prices[i] < min)
				min = prices[i];
			else if (prices[i] - min > ans)
				ans = prices[i] - min;
		}

		return ans;
	}
};
#endif // !Best_Time_to_Buy_and_Sell_Stock_H
