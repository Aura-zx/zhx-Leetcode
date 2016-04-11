#ifndef Best_Time_to_Buy_and_Sell_Stock_II_H
#define Best_Time_to_Buy_and_Sell_Stock_II_H

#include <vector>

class Solution_122
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
			if (prices[i] > min)
			{
				ans += prices[i] - min;
				min = prices[i];
			}
			else
				min = prices[i];
		}

		return ans; 
	}

};
#endif // !Best_Time_to_Buy_and_Sell_Stock_II_H
