#ifndef REMOVE_DUPLICATES_FROM_SORTED_ARRAY_II_H
#define REMOVE_DUPLICATES_FROM_SORTED_ARRAY_II_H

#include <vector>
class Solution_80
{
public:
	int removeDuplicates(std::vector<int>& nums)
	{
		if (nums.empty( ))
			return 0;

		int occur = 1;
		int index = 0;
		for (int i = 1; i < nums.size( ); i++)
		{
			if (nums[index] == nums[i])
			{
				if (occur == 2)
					continue;
				occur++;
			}
			else
				occur = 1;

			nums[++index] = nums[i];
		}

		return index + 1;
	}
};
#endif // !REMOVE_DUPLICATES_FROM_SORTED_ARRAY_II_H
