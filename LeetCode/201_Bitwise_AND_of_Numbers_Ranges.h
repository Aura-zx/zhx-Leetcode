#ifndef BITWISE_AND_OF_NUMBER_RANGE_H
#define BITWISE_AND_OF_NUMBER_RANGE_H

class Solution_201
{
public:
	int rangeBitwiseAnd(int m, int n)
	{
		for (int i = m+1; i < n; i++)
			m &= i;

		return m & n;
	}

	int rangeBitwiseAnd2(int m, int n)
	{
		while (n > m)
			n = n & n - 1;

		return m & n;
	}

	int rangeBitwiseAnd3(int m, int n)
	{
		int c = 0;
		while (m != n)
		{
			m >> 1;
			n >> 1;
			++c;
		}

		return n << c;
	}
};
#endif // !BITWISE_AND_OF_NUMBER_RANGE_H
