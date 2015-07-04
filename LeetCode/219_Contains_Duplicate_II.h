#ifndef CONTAINS_DUPLICATE_II_H
#define	CONTAINS_DUPLICATE_II_H

#include <iostream>
#include <map>
#include <vector>

using namespace std;

class Solution_219
{
public:
	bool containsNearbyDuplicate(vector<int>& nums, int k)
	{
		// check if nums is empty
		if (nums.empty( ))
			return false;

		map<int, int> m;
		for (size_t i = 0; i < nums.size( ); i++)
		{
			// check first k+1 numbers whether contains duplicate
			if (i <= (rsize_t)k)
			{
				auto p1 = m.insert(pair<int, int>(nums.at(i), nums.at(i)));
				if (p1.second == false)
					return true;
			}
			// check i--k+i numbers whether contains duplicate
			// note: delete the lastest insert element
			else if (i > (rsize_t)k)
			{
				m.erase(nums.at(i - k - 1));
				auto p2 = m.insert(pair<int, int>(nums.at(i), nums.at(i)));
				if (p2.second == false)
					return true;
			}
		}
		return false;
	}
};
#endif // !CONTAINS_DUPLICATE_II_H
