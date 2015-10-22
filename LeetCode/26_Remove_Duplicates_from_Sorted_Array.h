#ifndef REMOVE_DUPLICATES_FROM_SORTED_ARRAY_H
#define REMOVE_DUPLICATES_FROM_SORTED_ARRAY_H

#include<vector>
class Solution_26
{
public:
	int removeDuplicates(std::vector<int>& nums)
	{
		if (nums.empty( ))
			return 0;

		int  val    = nums[0];
		bool dup    = false;
		int  begin  = 1;
		for (size_t i = 1; i < nums.size( ); i++)
		{
			if (nums[i] != val)
			{
				nums[begin++] = nums[i];
				val = nums[i];
			}
		}

		return begin;
	}
};
#endif // !REMOVE_DUPLICATES_FROM_SORTED_ARRAY_H
