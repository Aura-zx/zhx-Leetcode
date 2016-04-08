#ifndef SINGLE_NUMBER_H
#define SINGLE_NUMBER_H

#include <map>
#include <vector>

class Solution_136
{
	int singleNumber(std::vector<int>& nums)
	{
		std::map<int, int> m;
		for (int i = 0; i < nums.size( ); i++)
		{
			if (m.count(nums[i]))
				m[nums[i]]++;
			else
				m[nums[i]] = 1;
		}

		for (auto i : nums)
		{
			if (m[i] == 1)
				return i;
		}
	}

	int singleNumber(std::vector<int>& nums)
	{
		int x = 0;
		for (auto i : nums)
			x = i ^ x;

		return x;
	}
};
#endif // !SINGLE_NUMBER_H
