#ifndef LONGEST_COMMON_PREFIX_H
#define	LONGEST_COMMON_PREFIX_H

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution_14
{
public:
	string longestCommonPrefix(vector<string>& strs)
	{
		// first to check if vector is empty
		if (strs.empty( ))
		{
			return "";
		}

		// return value
		string result = "";

		for (size_t i = 0; i < strs.at(0).size( ); i++)		// use first string
		{
			char c = strs.at(0).at(i);
			for (size_t j = 1; j < strs.size( ); j++)		// scan another string with the same index
			{
				if (strs.at(j).size( ) <= i)				// check if i is out of range
				{
					return result;
				}
				else
				{
					if (c != strs.at(j).at(i))
					{
						return result;
					}
				}
			}
			result.append(1, c);	// all the strings pass, add to result
		}
		return result;
	}
};
#endif