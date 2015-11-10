#ifndef REVERSE_INTEGER_H
#define REVERSE_INTEGER_H

#include <string>
#include <algorithm>
class Solution_7
{
public:
	int reverse(int x)
	{		
		int  res = 0;
		while (x != 0){
			if (res > INT_MAX / 10 || res < INT_MIN / 10)
				return 0;
			res = res * 10 + x % 10;
			x = x / 10;
		}
		return res;
	}

};

#endif // !REVERSE_INTEGER_H
