#ifndef INTERSECTION_OF_TWO_ARRAYS_H
#define INTERSECTION_OF_TWO_ARRAYS_H

#include <map>
#include <vector>

class Solution_349
{
public:
	std::vector<int> intersection(std::vector<int>& nums1, std::vector<int>& nums2)
	{
		std::map<int, int> m;
		std::vector<int> res;
		for (auto i : nums1)
			m[i] = 1;
		
		for (auto i : nums2)
		{
			if (m.find(i) != m.end( ))
				m[i]++;
		}

		for (auto i = m.begin( ); i != m.end( ); i++)
			if (i->second != 1)
				res.push_back(i->first);

		return res;
	}
};
#endif // !INSERTION_OF_TWO_ARRAYS_H
