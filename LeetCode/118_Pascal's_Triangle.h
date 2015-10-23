#ifndef PASCALS_TRIANGLE_H
#define PASCALS_TRIANGLE_H

#include <vector>
class Solution_118
{
public:
	std::vector<std::vector<int>> generate(int numRows)
	{
		std::vector<std::vector<int>> res;
		if (numRows <= 0)
			return res;

		for (int i = 1; i <= numRows; i++)
		{	
			std::vector<int> tmp;
			for (int j = 0; j < i; j++)
			{
				if (j == 0 || j == i - 1)
					tmp.push_back(1);
				else
					tmp.push_back(res[i - 2][j - 1] + res[i - 2][j]);
			}
			res.push_back(tmp);
		}

		return res;
	}

};

#endif // !PASCALS_TRIANGLE_H
