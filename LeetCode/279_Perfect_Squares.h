#ifndef PERFECT_SQUARES_H
#define PERFECT_SQUARES_H

#include <algorithm>
#include <vector>
class Solution_279
{
public:
	int numSquares(int n)
	{
		std::vector<int> dp(n+1, INT_MAX);

		for (int i = 0; i*i <= n; i++)
		{
			dp[i*i] = 1;
		}

		for (int i = 1; i <= n; i++)
		{
			for (int j = 1; i + j*j <= n; j++)
				dp[i + j*j] = std::min(dp[i] + 1, dp[i + j*j]);
		}

		return dp[n];
	}
};
#endif // !PERFECT_SQUARES_H
