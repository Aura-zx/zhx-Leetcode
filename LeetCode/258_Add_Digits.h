#ifndef ADD_DIGITS_H
#define ADD_DIGITS_H

class Solution_258
{
public:
	int addDigits(int num)
	{
		if (num < 10)
			return num;

		int digit;
		int sum = 0;
		do
		{
			digit = num % 10;
			sum = sum + digit;
			num = num / 10;
			if (sum >= 10 && num == 0)
			{
				num = sum;
				sum = 0;
			}
		} while (num != 0);

		return sum;
	}

};

#endif // !ADD_DIGITS_H
