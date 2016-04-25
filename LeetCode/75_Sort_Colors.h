#ifndef SORT_COLORS_H
#define SORT_COLORS_H

#include <vector>
class Solution_75
{
public:
	void sortColors(std::vector<int>& nums)
	{
		if (nums.empty( ) || nums.size( ) < 2)
			return;

		std::vector<int> count(3);
		for (int i = 0; i < nums.size( ); i++)
			count[nums[i]]++;

		int j = 0;
		int k = 0;
		while (j <= 2)
		{
			if (count[j] != 0)
			{
				nums[k++] = j;
				count[j]--;
			}
			else
				j++;
		}
	}
};
#endif // !SORT_COLORS_H
