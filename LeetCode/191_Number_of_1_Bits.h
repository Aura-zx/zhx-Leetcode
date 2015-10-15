#ifndef NUMBER_OF_1_BITS_H
#define NUMBER_OF_1_BITS_H
#include "stdint.h"			// include uint32_t
#include "math.h"
class Solution_191
{
public:	
	int hammingWeight(uint32_t n)
	{
		if (n == 0)
			return 0;

		uint32_t res = 0;
		int count = 0;
		for (int i = 0; i < (int)log2f(n) && i < 32; i++)
		{
			res = (1 << i) & n;
			if (res != 0)
				count++;
		}

		return count;
	}
};
#endif // !NUMBER_OF_1_BITS_H
