#ifndef FIND_MINIMUM_IN_ROTATED_SORTED_ARRAY_H
#define FIND_MINIMUM_IN_ROTATED_SORTED_ARRAY_H

#include <vector>
class Solution_153
{
	int findMin(std::vector<int>& nums)
	{
		int start = 0;
		int end = nums.size( ) - 1;

		while (start < end)
		{
			int mid = start + (end - start) / 2;
			if (nums[mid] < nums[end])
				end = mid;
			else
				start = mid + 1;
		}

		return nums[start];
	}
};
#endif // !FIND_MINIMUM_IN_ROTATED_SORTED_ARRAY_H
