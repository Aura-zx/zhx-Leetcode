#ifndef SPIRAL_MATRIX_H
#define SPIRAL_MATRIX_H

#include <vector>

class Solution_54
{
public:
	std::vector<int> spiralOrder(std::vector<std::vector<int>>& matrix)
	{
		std::vector<int> ret;
		if (matrix.empty( ) || matrix.size( ) == 0)
			return ret;

		int m = matrix.size( );
		int n = matrix[0].size( );

		int x = 0;
		int y = 0;

		while (m > 0 && n > 0)
		{
			if (m == 1)
			{
				for (int i = 0; i < n; i++)
					ret.push_back(matrix[x][y++]);
				break;
			}
			else if (n == 1)
			{
				for (int i = 0; i < m; i++)
					ret.push_back(matrix[x++][y]);
				break;
			}

			// top -> right
			for (int i = 0; i < n - 1; i++)
				ret.push_back(matrix[x][y++]);
			// right -> down
			for (int i = 0; i < m - 1; i++)
				ret.push_back(matrix[x++][y]);
			// down -> left
			for (int i = 0; i < n - 1; i++)
				ret.push_back(matrix[x][y--]);
			// left -> top
			for (int i = 0; i < m - 1; i++)
				ret.push_back(matrix[x--][y]);

			x++;
			y++;
			m -= 2;
			n -= 2;
		}

		return ret;
	}
};
#endif // !SPIRAL_MATRIX_H
