#ifndef SEARCH_IN_ROTATED_SORTED_ARRAY_II_H
#define SEARCH_IN_ROTATED_SORTED_ARRAY_II_H

#include <vector>
class Solution_81
{
public:
	bool search(std::vector<int>& nums, int target)
	{
		int start = 0;
		int end = nums.size( ) - 1;

		while (start <= end)
		{
			int mid = start + (end - start) / 2;
			if (nums[mid] == target)
				return true;
			if (nums[start] < nums[mid])
			{
				if (target >= nums[start] && target <= nums[mid])
					end = mid - 1;
				else
					start = mid + 1;
			}
			else if (nums[start] > nums[mid])
			{
				if (target >= nums[start] || target <= nums[mid])
					end = mid - 1;
				else
					start = mid + 1;
			}
			else // start和mid相等时，start向前进一步即可
				start++;
		}

		return false;
	}
};
#endif // !SEARCH_IN_ROTATED_SORTED_ARRAY_II_H
