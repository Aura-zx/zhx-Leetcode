#ifndef MAXIMUM_PRODUCT_SUBARRAY_H
#define MAXIMUM_PRODUCT_SUBARRAY_H

#include <algorithm>
#include <vector>

class Solution_152
{
public:
	int maxProduct(std::vector<int>& nums)
	{
		if (nums.empty( ))
			return 0;

		int maxlocal = nums[0];
		int minlocal = nums[0];
		int global = nums[0];

		for (int i = 1; i < nums.size( ); i++)
		{
			int maxcopy = maxlocal;
			maxlocal = std::max(std::max(maxlocal*nums[i], nums[i]), nums[i] * minlocal);
			minlocal = std::min(std::min(maxcopy*nums[i], nums[i]), nums[i] * minlocal);
			global = std::max(maxlocal, global);
		}

		return global;
	}
};
#endif // !MAXIMUM_PRODUCT_SUBARRAY_H
