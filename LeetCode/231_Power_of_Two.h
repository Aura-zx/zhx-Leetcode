#ifndef POWER_OF_TOW_H
#define POWER_OF_TOW_H

class Solution_231
{
public:
	bool isPowerOfTwo(int n)
	{
		// negative number
		if (n <= 0)
			return false;
		else if (n == 1)	// 2^0 = 1
			return true;
		
		while (1)
		{
			// odd number
			if (n % 2 == 1)
				return false;	
			else
				n = n / 2;

			// even number at last
			if (n == 1)
				return true;
		}
	}

	bool isPowerOfTwo2(int n)
	{
		if (n <= 0)
			return false;

		if ((n & (n - 1)) == 0)
			return true;
		else
			return false;
	}
};


#endif // !POWER_OF_TOW_H
