#ifndef COUNTING_BITS_H
#define COUNTING_BITS_H
#include <vector>
#include <stdint.h>

class Solution_338
{
public:
	int countBit(int num)
	{
		if (num == 0)
			return 0;

		uint32_t res = 0;
		int count = 0;
		for (int i = 0; i < 32; i++)
		{
			res = (1 << i) & num;
			if (res != 0)
				count++;
		}

		return count;
	}

	std::vector<int> countBits(int num)
	{
		std::vector<int> res;
		for (int i = 0; i <= num; i++)
			res.push_back(countBit(i));

		return res;
	}
	
};
#endif // !COUNTING_BITS_H
