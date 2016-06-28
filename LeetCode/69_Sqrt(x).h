#ifndef SQRT_H
#define SQRT_H

#include <algorithm>
class Solution_69
{
public:
	int mySqrt(int x)
	{
		if (x == 0 || x == 1)
			return x;

		long left = 0;
		long right = x / 2 + 1;
		long mid = 0;
		while (left <= right)
		{
			mid = (right - left) / 2 + left;
			if (mid *mid == x)
				return mid;
			else if (mid*mid < x)
				left = mid + 1;
			else
				right = mid - 1;
		}

		return std::min(right, mid);
	}
};
#endif // !SQRT_H
