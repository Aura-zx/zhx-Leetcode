#ifndef RANGE_SUM_QUERY_H
#define RANGE_SUM_QUERY_H

#include <vector>
class NumArray
{
	std::vector<int> ret = { 0 };
public:
	NumArray(std::vector<int> &nums)
	{
		for (auto n : nums)
			ret.push_back(ret.back( ) + n);
	}

	int sumRange(int i, int j)
	{
		return ret[j + 1] - ret[i];
	}
};
#endif // !RANGE_SUM_QUERY_H
