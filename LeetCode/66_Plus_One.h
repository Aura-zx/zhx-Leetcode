#ifndef PLUS_ONE_H
#define PLUS_ONE_H

#include<vector>
class Solution_66
{
public:
	std::vector<int> plusOne(std::vector<int>& digits)
	{
		bool first = false;
		std::vector<int> res;
		for (int i = digits.size( ) - 1; i >= 0; i--)
		{
			if (digits[i] + 1 > 9)
			{
				digits[i] = 0;
				if (i == 0)
					first = true;
			}
			else
			{
				digits[i] = digits[i] + 1;
				break;
			}
		}
		
		res = digits;
		if (first == true)
			res.insert(res.begin( ), 1);

		return res;
	}

};

#endif // !PLUS_ONE_H


