#ifndef MAXIMUM_SUBARRAY_H
#define MAXIMUM_SUBARRAY_H

#include <algorithm>
#include <vector>

class Solution_53
{
public:
	int maxSubarray(std::vector<int>& nums)
	{
		if (nums.empty( ))
			return 0;

		int sum_so_far = nums[0];
		int sum_end_here = nums[0];
		for (int i = 1; i < nums.size( ); i++)
		{
			sum_end_here = std::max(nums[i], sum_end_here + nums[i]);
			sum_so_far = std::max(sum_so_far, sum_end_here);
		}

		return sum_so_far;
	}
};
#endif // MAXIMUM_SUBARRAY_H
