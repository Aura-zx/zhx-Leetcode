#ifndef COUNT_NUMBERS_WITH_UNIQUE_DIGITS_H
#define COUNT_NUMBERS_WITH_UNIQUE_DIGITS_H

#include <algorithm>
#include <vector>
class Solution_357
{
public:
	int compute(int n)
	{
		int product = 9;
		for (int i = 2; i <= n; i++)
			product *= (9 - i + 2);

		return product;
	}

	int countNumbersWithUniqueDigits(int n)
	{
		std::vector<int> res;
		res.push_back(-1);
		res.push_back(10);
		if (n == 1)
			return res[1];

		for (int i = 2; i <= n; i++)
			res[i] = res[i-1] + compute(i);

		return res[n];
	}

	int countNumbersWithUniqueDigits2(int n)
	{
		// 9-i+2>0 -> i < 11, i最大为10，即当位数大于10的时候，不存在这样的数，所以不用计算这种情况
		n = std::min(n, 10);
		std::vector<int> dp(n + 1, 9);
		dp[0] = 1;
		for (int i = 2; i <= n; i++)
			for (int j = 9; j >= 9 - i + 2; j--)
			{
				dp[i] *= j;
			}

		int ans = 0;
		for (int i = 0; i < dp.size( ); i++)
			ans += dp[i];

		return ans;
	}
};
#endif // !COUNT_NUMBERS_WITH_UNIQUE_DIGITS_H
