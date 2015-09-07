#ifndef ZIGZAG_CONVERSION_H
#define ZIGZAG_CONVERSION_H

#include "stdafx.h"
#include <iostream>
class Solution_6
{
public:
	std::string convert(std::string s, int numRows)
	{
		if (s.empty( ) || numRows == 1 ||s.length() <= numRows)
			return s;
		int zigspan = 2 * numRows - 2;
		
		std::string res;
		for (int i = 0; i < numRows; i++)
		{
			for (int j = i; j < s.length( ); j += zigspan)
			{
				res.push_back(s[j]);					// fixed number for each row
				if (i != 0 && i != numRows-1 && j + zigspan - 2 * i < s.length( ))  // not 1st row and last-1 row and in range
					res.push_back(s[j + zigspan - 2 * i]);
			}
		}
		return res;
	}
};
#endif // !ZIGZAG_CONVERSION_H
