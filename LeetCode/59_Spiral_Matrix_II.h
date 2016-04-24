#ifndef SPIRAL_MATRIX_II_H
#define SPIRAL_MATRIX_II_H

#include <vector>

class Solution_59
{
public:
	std::vector<std::vector<int>> generateMatrix(int n)
	{
		std::vector<std::vector<int>> ret(n, std::vector<int>(n,0));

		int start = 0;
		int end = n - 1;
		int val = 1;

		while (start < end)
		{
			for (int j = start; j < end; j++)
				ret[start][j] = val++;
			for (int i = start; i < end; i++)
				ret[i][end] = val++;
			for (int j = end; j > start; j--)
				ret[end][j] = val++;
			for (int i = end; i > start; i--)
				ret[i][start] = val++;

			start++;
			end--;
		}

		if (start == end)
			ret[start][start] = val;

		return ret;
	}
};
#endif // !SPIRAL_MATRIX_II_H
