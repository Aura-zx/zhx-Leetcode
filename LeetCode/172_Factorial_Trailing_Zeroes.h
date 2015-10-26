#ifndef FACTORIAL_TRAILING_ZEROES_H
#define FACTORIAL_TRAILING_ZEROES_H

class Solution_172
{
public:
	int trailingZeroes(int n)
	{
		if (n < 5)
			return 0;
		int count = 0;
		while (n >= 5)
		{
			n /= 5;
			count += n;
		}

		return count;
	}
};

#endif // !FACTORIAL_TRAILING_ZEROES_H
