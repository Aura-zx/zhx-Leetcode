#ifndef SEARCH_A_2D_MATRIX_H
#define SEARCH_A_2D_MATRIX_H

#include <vector>

class Solution_74
{
public:
	bool searchMatrix(std::vector<std::vector<int>>& matrix, int target)
	{
		int m = matrix.size( );
		int n = matrix[0].size( );

		if (target < matrix[0][0])
			return false;
		int start = 0;
		int end = m - 1;

		while (start <= end)
		{
			int mid = start + (end - start) / 2;
			if (target == matrix[mid][0])
				return true;
			else if (target > matrix[mid][0])
				start = mid+1;
			else if (target < matrix[mid][0])
				end = mid-1;
		}

		int row = end;
		start = 0;
		end = n - 1;
		while (start <= end)
		{
			int mid = start + (end - start) / 2;
			if (target == matrix[row][mid])
				return true;
			else if (target > matrix[row][mid])
				start = mid+1;
			else if (target < matrix[row][mid])
				end = mid-1;
		}

			return false;
	}
};
#endif // !SEARCH_A_2D_MATRIX_H
