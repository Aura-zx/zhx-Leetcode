#ifndef MISSING_NUMBER_H
#define MISSING_NUMBER_H

#include <vector>
class Solution_268
{
public:
	int missingNumber(std::vector<int>& nums)
	{
		int size = nums.size( );
		int total = (0 + size) * (size + 1) / 2;
		for (int i = 0; i < size; i++)
			total -= nums[i];

		return total;
	}
};
#endif // !MISSING_NUMBER_H
