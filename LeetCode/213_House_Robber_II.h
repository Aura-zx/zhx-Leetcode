#ifndef HOUSE_ROBBER_II_H
#define HOUSE_ROBBER_II_H

#include <algorithm>
#include <vector>

class Solution_213
{
public:
	int rob(std::vector<int>& nums)
	{
		if (nums.empty())
			return 0;
		if (nums.size() == 1)
			return nums[0];
		if (nums.size() == 2)
			return std::max(nums[0], nums[1]);

		int size = nums.size();
		std::vector<int> ret1(size-1);
		ret1[0] = nums[0];
		ret1[1] = std::max(nums[0],nums[1]);
		for(int i = 2; i < ret1.size(); i++)
			ret1[i] = std::max(ret1[i-1], nums[i] + ret1[i-2]);

		std::vector<int> ret2(size-1);
		ret2[0] = nums[1];
		ret2[1] = std::max(nums[1],nums[2]);
		for(int i = 2; i < ret2.size(); i++)
			ret2[i] = std::max(ret2[i-1], nums[i+1]+ret2[i-2]);

		return std::max(ret1[size-2], ret2[size-2]);
	}

};
#endif // !HOUSE_ROBBER_II_H
