#ifndef COMBINATION_SUM_III_H
#define COMBINATION_SUM_III_H

#include <vector>

class Solution_216
{
public:

	void backtracking(std::vector<std::vector<int>>& ret, std::vector<int>& candidates, std::vector<int>& per, int level, int target, int lim)
	{
		if (target == 0 && lim == per.size())
		{
			ret.push_back(per);
			return;
		}

		for (int i = level; i < candidates.size( ); i++)
		{
			if (i > level && candidates[i] == candidates[i - 1])
				return;
			if (target < candidates[i])
				return; 
			per.push_back(candidates[i]);
			backtracking(ret, candidates, per, i + 1, target - candidates[i], lim);
			per.pop_back( );
		}
	}

	std::vector<std::vector<int>> combinationSum3(int k, int n)
	{
		std::vector<int> candidates = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
		std::vector<std::vector<int>> ret;
		std::vector<int> per;

		backtracking(ret, candidates, per, 0, n, k);

		return ret;
	}
};
#endif // !COMBINATION_SUM_III_H
