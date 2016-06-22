#ifndef TRIANGLE_H
#define TRIANGLE_H

#include <algorithm>
#include <vector>

class Solution_120
{
public:
	int minimumTotal(std::vector<std::vector<int>>& triangle)
	{
		int size = triangle.size( )-1;

		for (int i = size-1; i >= 0; i--)
		{
			for (int j = 0; j <= i; ++j)
				triangle[i][j] += std::min(triangle[i + 1][j], triangle[i + 1][j + 1]);
		}

		return triangle[0][0];
	}
};
#endif // !TRIANGLE_H
