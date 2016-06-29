#ifndef LARGEST_DIVISIBLE_SUBSET_H
#define LARGEST_DIVISIBLE_SUBSET_H

#include <algorithm>
#include <vector>
class Solution_368
{
public:
	std::vector<int> LargestDivisibleSubset(std::vector<int>& nums)
	{
		std::vector<int> ans;
		if (nums.empty( ))
			return ans;
		std::sort(nums.begin( ), nums.end( ));
		
		auto n = nums.size( );
		std::vector<int> dp(n, 1);
		std::vector<int> index(n, -1);
		int max_index = 0;
		int max_dp = 1;
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < i; j++)
			{
				if (nums[i] % nums[j] == 0 && dp[j] + 1 > dp[i])
				{
					dp[i] = dp[j] + 1;
					index[i] = j;
				}
			}
			if (max_dp < dp[i])
			{
				max_dp = dp[i];
				max_index = i;
			}
		}

		for (int i = max_index; i != -1; i = index[i])
			ans.push_back(nums[i]);

		return ans;
	}
};
#endif // !LARGEST_DIVISIBLE_SUBSET_H
