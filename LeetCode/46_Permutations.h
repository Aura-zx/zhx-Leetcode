#ifndef PERMUTATIONS_H
#define PERMUTATIONS_H

#include <vector>

class Solution_46
{
public:
	void findPermutations(std::vector<int>& nums, std::vector<bool>& used, std::vector<int>& per, std::vector<std::vector<int>>& ret)
	{
		if (per.size( ) == nums.size( ))
		{
			ret.push_back(per);
			return;
		}

		for (int i = 0; i < nums.size( ); i++)
		{
			if (used[i])
				continue;
			used[i] = true;
			per.push_back(nums[i]);
			findPermutations(nums, used, per, ret);
			used[i] = false;
			per.pop_back( );
		}
	}

	std::vector<std::vector<int>> permute(std::vector<int>& nums)
	{
		std::vector<std::vector<int>> ret;
		if (nums.empty( ))
			return ret;

		std::vector<bool> used(nums.size(), false);
		std::vector<int> per;
		findPermutations(nums, used, per, ret);

		return ret;
	}
};
#endif // !PERMUTATIONS_H
