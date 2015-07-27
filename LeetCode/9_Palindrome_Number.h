#ifndef PALINDROME_NUMBER_H
#define PALINDROME_NUMBER_H
class Solution_9
{
public:
	bool isPalindrome(int x)
	{
		// negative number is not palindrome
		if (x < 0)
			return false;
		else if (x < 10)		// single number is palindrome
			return true;

		// calculate reverse number
		int tmp = x;
		int reverse = 0;
		while (tmp > 0)
		{
			reverse = reverse * 10 + tmp % 10;
			tmp = tmp / 10;
		}

		// compare with origin number
		if (x == reverse)
			return true;
		else
			return false;
	}
};
#endif // !PALINDROME_NUMBER_H
