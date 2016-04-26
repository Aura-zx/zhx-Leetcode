#ifndef SUBSETS_H
#define SUBSETS_H

#include <algorithm>
#include <vector>

class Solution_78
{
public:
	void backtracking(std::vector<int>& nums, std::vector<std::vector<int>>& ret, std::vector<int>& per, int contain)
	{
		for (int i = contain; i < nums.size(); i++)
		{
			per.push_back(nums[i]);
			ret.push_back(per);
			backtracking(nums, ret, per, i+1);
			per.pop_back( );
		}

		return;
	}

	std::vector<std::vector<int>> subsets(std::vector<int>& nums)
	{
		std::vector<std::vector<int>> ret;
		std::vector<int> per;
		ret.push_back(per);
		std::sort(nums.begin( ), nums.end( ));

		backtracking(nums, ret, per, 0);

		return ret;
	}
};
#endif // !SUBSETS_H
