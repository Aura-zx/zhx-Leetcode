#ifndef UNIQUE_PATHS_H
#define UNIQUE_PATHS_H

#include<vector>

class Solution_62
{
public:
	int uniquePaths(int m, int n)
	{
		if (m < 1 || n < 1)
			return 0;

		std::vector<int> dp(n, 1);
		for (int i = 1; i < m; i++)
			for (int j = 1; j < n; j++)
				dp[j] += dp[j - 1];

		return dp[n - 1];
	}
};
#endif // !UNIQUE_PATHS_H
