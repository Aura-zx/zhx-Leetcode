#ifndef FIND_THE_DUPLICATED_NUMBER_H
#define FIND_THE_DUPLICATED_NUMBER_H

#include <vector>
class Solution_287
{
public:
	int findDuplicat(std::vector<int>& nums)
	{
		for (int i = 0; i < nums.size( ); i++)
		{
			if (nums[abs(nums[i])] > 0)
				nums[abs(nums[i])] = -nums[abs(nums[i])];
			else
				return abs(nums[i]);
		}

		return -1;
	}

	int findDuplicat2(std::vector<int>& nums)
	{
		if (nums.size( ) > 1)
		{
			int slow = nums[0];
			int fast = nums[nums[0]];
			while (slow != fast)
			{
				slow = nums[slow];
				fast = nums[nums[fast]];
			}

			fast = 0;
			while (fast != slow)
			{
				fast = nums[fast];
				slow = nums[slow];
			}

			return slow;
		}

		return -1; 
	}
};
#endif // !FIND_THE_DUPLICATED_NUMBER_H
