#ifndef PASCAL_TRIANGLE_II_H
#define PASCAL_TRIANGLE_II_H

#include <vector>
class Solution_119
{
public:
	std::vector<int> getRow(int rowIndex)
	{
		std::vector<int> res(rowIndex + 1, 1);
		for (int i = 2; i <= rowIndex; i++)
		{
			int pre = 1;
			for (int j = 1; j < i; j++)
			{
				int tmp = res[j];
				res[j] += pre;
				pre = tmp;
			}
		}
		return res;
	}

};

#endif // !PASCAL_TRIANGLE_II_H
