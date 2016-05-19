#ifndef FIND_PEAK_ELEMENT_H
#define FIND_PEAK_ELEMENT_H

#include <vector>
class Solution_162
{
public:
	int findPeakElement(std::vector<int>& nums)
	{
		if (nums.size( ) == 1)
			return 0;

		for (int i = 0; i < nums.size( ); i++)
		{
			if (i == 0)
			{
				if (nums[i] > nums[i + 1])
					return i;
			}

			if (i == nums.size( ) - 1)
			{
				if (nums[i] > nums[i - 1])
					return i;
			}

			if (nums[i] > nums[i - 1] && nums[i] > nums[i + 1])
				return i;
		}

		return -1;
	}
};
#endif // !FIND_PEAK_ELEMENT_H
