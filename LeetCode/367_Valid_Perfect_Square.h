#ifndef VALID_PERFECT_SQUARE_H
#define VALID_PERFECT_SQUARE_H

class Solution_367
{
public:
	bool isPerfectSquare(int num)
	{
		if (num == 0 || num == 1)
			return true;

		long long left = 0;
		long long right = num / 2 + 1;

		while (left <= right)
		{
			long long mid = (right - left) / 2 + left;
			if (mid*mid == num)
				return true;
			else if (mid*mid > num)
				right = mid - 1;
			else
				left = mid + 1;
		}

		return false;
	}
};
#endif // !VALID_PERFECT_SQUARE_H
