#ifndef UNIQUE_BINARY_SEARCH_TREES_H
#define UNIQUE_BINARY_SEARCH_TREES_H

#include <vector>
class Solution_96
{
public:
	int numTrees(int n)
	{
		std::vector<int> dp(n + 1, 0);
		dp[0] = 1;
		dp[1] = 1;
		
		for (int i = 2; i <= n; i++)
		{
			for (int j = 0; j < i; j++)
			{
				dp[i] += dp[j] * dp[i - j - 1];
			}
		}

		return dp[n];
	}
};
#endif // !UNIQUE_BINARY_SEARCH_TREES_H
