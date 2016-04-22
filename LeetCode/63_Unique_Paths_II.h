#ifndef UNIQUE_PATHS_II_H
#define UNIQUE_PATHS_II_H

#include <vector>
class Solution_63
{
public:
	int uniquePathsWithObstacles(std::vector<std::vector<int>>& obstacleGrid)
	{
		if (obstacleGrid.empty( ) || obstacleGrid[0][0] == 1)
			return 0;
		int m = obstacleGrid.size( );
		int n = obstacleGrid[0].size( );
		std::vector<int> dp(n, 0);

		for (int i = 0; i < n; i++)
		{
			if (obstacleGrid[0][i] == 0)
				dp[i] = 1;
			else
				break;
		}
		
		for (int i = 1; i < m; i++)
		{
			if (obstacleGrid[i][0] == 1)
				dp[0] = 0;
			for (int j = 1; j < n; j++)
			{
				if (obstacleGrid[i][j] == 1)
					dp[j] = 0;
				else
					dp[j] += dp[j - 1];
			}
		}
		
		return dp[n - 1];
	}
};
#endif // !UNIQUE_PATHS_II_h
