#ifndef COMBINATION_SUM_II_H
#define COMBINATION_SUM_II_H

#include <algorithm>
#include <vector>

class Solution_40
{
public:
	void backtracking(std::vector<int>& candidates, std::vector<int>& per, int level, std::vector<std::vector<int>>& ret, int target)
	{
		if (target == 0)
		{
			ret.push_back(per);
			return ;
		}

		for (int i = level; i < candidates.size( ); i++)
		{
			if (i > level && candidates[i] == candidates[i - 1])
				continue;
			if (target < candidates[i])
				return;

			per.push_back(candidates[i]);
			backtracking(candidates, per, i+1, ret, target - candidates[i]);
			per.pop_back( );
		}
	}

	std::vector<std::vector<int>> combinationSum2(std::vector<int>& candidates, int target)
	{
		std::vector<std::vector<int>> ret;
		std::vector<int> per;

		std::sort(candidates.begin( ), candidates.end( ));

		backtracking(candidates, per, 0, ret, target);

		return ret;
	}
};
#endif // !COMBINATION_SUM_II_H
