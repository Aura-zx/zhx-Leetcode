#ifndef SUM_OF_TWO_INTEGERS_H
#define SUM_OF_TWO_INTEGERS_H

class Solution_371
{
public:
	int getSum(int a, int b)
	{
		int ans = 0;
		int carry = 0;

		for (int i = 0; i < 32; a >>= 1, b >>= 1, i++)
		{
			int lower_a = a & 1;
			int lower_b = b & 1;
			ans |= (lower_a ^ lower_b ^carry) << i;
			carry = (carry & lower_a) | (carry & lower_b) | (lower_a & lower_b);
		}

		return ans;
	}

	int getSum2(int a, int b)
	{
		while (b != 0)
		{
			int c = a & b;	// carry
			a ^= b;			// add
			b = c << 1;
		}
		
		return a;
	}
};
#endif // !SUM_OF_TWO_INTEGERS_H
