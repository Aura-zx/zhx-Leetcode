#ifndef INCREASING_TRIPLET_SUBSEQUENCE_H
#define INCREASING_TRIPLET_SUBSEQUENCE_H

#include <vector>
class Solution_334
{
public:
	bool increasingTriplet(std::vector<int>& nums)
	{
		if (nums.empty( ))
			return false;

		int x1 = INT_MAX;
		int x2 = INT_MAX;
		for (auto n:nums)
		{
			if (n <= x1)
				x1 = n;
			else if (n <= x2)  // x1 < n < x2
				x2 = n;
			else               // n > x2
				return true;
		}

		return false;
	}
};
#endif // !INCREASING_TRIPLET_SUBSEQUENCE_H
