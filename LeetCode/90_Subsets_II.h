#ifndef SUBSETS_II_H
#define SUBSETS_II_H

#include <algorithm>
#include <vector>
class Solution_90
{
public:
	void backtracking(std::vector<int>& nums, std::vector<std::vector<int>>& ret, std::vector<int>& per, int contain)
	{
		for (int i = contain; i < nums.size( ); i++)
		{
			per.push_back(nums[i]);
			ret.push_back(per);
			//if (i < nums.size()-1)
			backtracking(nums, ret, per, i + 1);
			per.pop_back( );
			while (i < nums.size( ) - 1 && nums[i] == nums[i + 1])
				i++;
		}

		return;
	}

	std::vector<std::vector<int>> subsetsWithDup(std::vector<int>& nums)
	{
		std::vector<std::vector<int>> ret;
		std::vector<int> per;
		ret.push_back(per);
		std::sort(nums.begin( ), nums.end( ));

		backtracking(nums, ret, per, 0);

		return ret;
	}
};
#endif // SUBSETS_II_H
