#ifndef SEARCH_A_2D_MATRIX_II_H
#define SEARCH_A_2D_MATRIX_II_H

#include <vector>

class Solution_240
{
public:
	bool searchMatrix(std::vector<std::vector<int>>& matrix, int target)
	{
		int m = matrix.size( )-1;
		int n = matrix[0].size( )-1;

		int i = m;
		int j = 0;
		int cur = matrix[i][j];
		while (1)
		{
			if (target > cur && j != n)
				cur = matrix[i][++j];
			else if (target < cur && i != 0)
				cur = matrix[--i][j];
			else if (cur == target)
				return true;
			else
				return false;
		}
	}
};
#endif // !SEARCH_A_2D_MATRIX_II_H
