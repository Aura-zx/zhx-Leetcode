#ifndef CONTAINS_DUPLICATE_H
#define CONTAINS_DUPLICATE_H

#include <iostream>
#include <vector>
#include <map>
using namespace std;

class Solution_217
{
public:
	bool  containsDuplicate(vector<int>& nums)
	{
		// check if nums is empty
		if (nums.empty( ))
			return false;

		// use map to hash
		map<int, int> m1;
		pair<map<int, int>::iterator, bool> p1;

		for (size_t i = 0; i < nums.size( ); i++)
		{
			p1 = m1.insert(pair<int, int>(nums.at(i), nums.at(i)));
			if (p1.second == false)
				return true;
		}
		return false;
	}
};
#endif // !CONTAINS_DUPLICATE_H
