#ifndef COMBINATION_SUM_H
#define COMBINATION_SUM_H

#include <algorithm>
#include <vector>

class Solution_39
{
public:
	void backTracking(std::vector<int>& candidates, std::vector<int>& per, int level, std::vector<std::vector<int>>& ret, int target)
	{
		if (target == 0)
		{
			ret.push_back(per);
			return ;
		}

		for (int i = level; i < candidates.size( ); i++)
		{
			if (target - candidates[i] < 0)
				return;
			else
			{
				per.push_back(candidates[i]);
				backTracking(candidates, per, i, ret, target - candidates[i]);
				per.pop_back( );
			}
		}
	}

	std::vector<std::vector<int>> combinationSum(std::vector<int>& candidates, int target)
	{
		std::vector<std::vector<int>> ret;
		std::vector<int> per;

		if (candidates.empty( ) || candidates.size( ) == 0)
			return ret;

		std::sort(candidates.begin(), candidates.end());
		backTracking(candidates, per, 0, ret, target);

		return ret;
	}

};
#endif // !COMBINATION_SUM_H
