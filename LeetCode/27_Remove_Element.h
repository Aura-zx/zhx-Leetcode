#ifndef REMOVE_ELEMENT_H
#define REMOVE_ELEMENT_H

#include <vector>
class Solution_27
{
public:
	int removeElement(std::vector<int>& nums, int val)
	{
		int begin = 0;
		for (size_t i = 0; i < nums.size( ); i++)
		{
			if (nums[i] != val)
				nums[begin++] = nums[i];
		}
		return begin;
	}

};

#endif // !REMOVER_ELEMENT_H
