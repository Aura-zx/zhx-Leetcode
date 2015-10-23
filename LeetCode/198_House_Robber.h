#ifndef HOUSE_ROBBER_H
#define HOUSE_ROBBER_H

#include <vector>
#include <algorithm>
class Solution_198
{
public:
	int rob(std::vector<int>& nums)
	{
		if (nums.empty( ) == true)
			return 0;
		if (nums.size( ) == 1)
			return nums[0];
		if (nums.size( ) == 2)
			return std::max(nums[0], nums[1]);

		std::vector<int> res(nums.size( ));
		res[0] = nums[0];
		res[1] = std::max(nums[0], nums[1]);
		for (int i = 2; i < nums.size( ); i++)
		{
			res[i] = std::max(res[i - 1], nums[i] + res[i - 2]);
		}

		return res[nums.size( ) - 1];
	}
};
#endif // !HOUSE_ROBBER_H
