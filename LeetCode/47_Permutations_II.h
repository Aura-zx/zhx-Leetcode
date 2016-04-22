#ifndef PERMUTATIONS_II_H
#define PERMUTATIONS_II_H

#include <algorithm>
#include <vector>
class Solution_47
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
			if (i > 0 && nums[i] == nums[i - 1] && !used[i - 1])
				continue;
			used[i] = true;
			per.push_back(nums[i]);
			findPermutations(nums, used, per, ret);
			per.pop_back( );
			used[i] = false;
		}
	}

	std::vector<std::vector<int>> permuteUnique(std::vector<int>& nums)
	{
		std::vector<std::vector<int>> ret;
	
		if (nums.empty( ))
			return ret;
		std::sort(nums.begin(), nums.end());
		std::vector<bool> used(nums.size( ), false);
		std::vector<int> per;
		findPermutations(nums, used, per, ret);
		
		return ret;
	}
};
#endif // !PERMUTATIONS_II_H
