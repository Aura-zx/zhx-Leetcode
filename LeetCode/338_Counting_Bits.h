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

	std::vector<int> countingBits(int num)
	{
		std::vector<int> res(num+1, 0);
		int p = 1;
		int pow = 1;

		for (int i = 1; i <= num; i++)
		{
			if (i == pow)
			{
				res.at(i) = 1;
				pow = pow << 1;
				p = 1;
			}
			else
			{
				res.at(i) = res.at(p)+1;
				p++;
			}
		}

		return res;
	}
	
};
#endif // !COUNTING_BITS_H
