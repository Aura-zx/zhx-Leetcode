#ifndef MINIMUM_PATH_SUM_H
#define MINIMUM_PATH_SUM_H

#include <algorithm>
#include <vector>
class Solution_64
{
public:
	int minPathSum(std::vector<std::vector<int>>& grid)
	{
		int m = grid.size( );
		int n = grid[0].size( );
		std::vector<std::vector<int>> ret(m, std::vector<int>(n, 0));
		ret[0][0] = grid[0][0];

		for (int i = 1; i < n; i++)
		{
			ret[0][i] = ret[0][i - 1] + grid[0][i];
		}
		for (int i = 1; i < m; i++)
		{
			ret[i][0] = ret[i - 1][0] + grid[i][0];
		}

		for (int i = 1; i < m; i++)
		{
			for (int j = 1; j < n; j++)
			{
				ret[i][j] = std::min(ret[i - 1][j], ret[i][j - 1])+grid[i][j];
			}
		}

		return ret[m-1][n-1];
	}
};
#endif // !MINIMUM_PATH_SUM_H
