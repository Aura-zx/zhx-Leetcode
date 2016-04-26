#ifndef COMBINATIONS_H
#define COMBINATIONS_H

#include <vector>

class Solution_77
{
public:
	void backtracking(std::vector<std::vector<int>>& ret, std::vector<int>& per, int n, int k, int start)
	{
		if (per.size( ) == k)
		{
			ret.push_back(per);
			return;
		}
			
		for (int i = start; i <= n; i++)
		{
			per.push_back(i);
			backtracking(ret, per, n, k, i+1);
			per.pop_back( );
		}
	}

	std::vector<std::vector<int>> combine(int n, int k)
	{
		std::vector<std::vector<int>> ret;
		std::vector<int> per;
		
		backtracking(ret, per, n, k, 1);

		return ret;
	}
};
#endif // !COMBINATIONS_H
