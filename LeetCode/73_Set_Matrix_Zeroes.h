#ifndef SET_MATRIX_ZEROES_H
#define SET_MATRIX_ZEROES_H

#include <vector>
#include <set>
class Solution_73
{
public:
	void setZeroes(std::vector<std::vector<int>>& matrix)
	{
		if (matrix.empty( ))
			return;

		int m = matrix.size( );
		int n = matrix[0].size( );

		std::set<int> row;
		std::set<int> col;
		for (int i = 0; i < m; i++)
		{
			for (int j = 0; j < n; j++)
			{
				if (matrix[i][j] == 0)
				{
					row.insert(i);
					col.insert(j);
					continue;
				}
			}
		}

		for (int i = 0; i < m; i++)
		{
			for (int j = 0; j < n; j++)
			{
				if (row.count(i))
					matrix[i][j] = 0;
				if (col.count(j))
					matrix[i][j] = 0;
			}
		}

		return;
	}

};
#endif // !SET_MATRIX_ZEROES_H
