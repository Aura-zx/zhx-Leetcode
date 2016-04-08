#ifndef TWO_SUM_H
#define TWO_SUM_H
#include <iostream>
#include <map>
#include <vector>

class Solution_1
{
public:
	std::vector<int> twoSum(std::vector<int>& nums, int target)
	{
		std::map<int, int> m1;
		std::vector<int> ret;

		for (int i = 0; i < nums.size( ); i++)
		{
			if (m1.find(target - nums[i]) != m1.end( ))
			{
				ret.push_back(m1[target - nums[i]]);
				ret.push_back(i);
				return ret;
			}				
			m1[nums[i]] = i;
		}
		return ret;
	}
};
#endif // !TWO_SUM_H
