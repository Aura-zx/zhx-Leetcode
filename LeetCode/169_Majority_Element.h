#ifndef MAJORITY_ELEMENT_H
#define	MAJORITY_ELEMENT_H

#include<vector>
class Solution_169
{
public:
	int majorityElement(std::vector<int>& nums)
	{
		//  non-empty and the majority element always exist in the array.
		int maj_index = 0;
		int count = 1;
		for (size_t i = 0; i < nums.size( ); i++)
		{
			if (nums[maj_index] == nums[i])
				count++;
			else
				count--;
			if (count == 0)
			{
				maj_index = i;
				count = 1;				// reset count
			}
		}
		return nums[maj_index];
	}
};

#endif // !MAJORITY_ELEMENT_H
