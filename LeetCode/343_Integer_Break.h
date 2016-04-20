#ifndef INTEGER_BREAK_H
#define INTEGER_BREAK_H

#include <algorithm>
#include <vector>
class Solution_343
{
public:
	int integerBreak(int n)
	{
		if (n <= 3)
			return n - 1;
		std::vector<int> dp(n + 1, 0);
		dp[2] = 2;
		dp[3] = 3;
		for (int i = 4; i < dp.size( ); i++)
			dp[i] = std::max(3 * dp[i - 3], 2 * dp[i - 2]);

		return dp[n];
	}
};
#endif // !INTEGER_BREAK_H
