#ifndef LONGEST_INCREASING_SUBSEQUENCE_H
#define LONGEST_INCREASING_SUBSEQUENCE_H

#include <algorithm>
#include <vector>
class Solution_300
{
public:
	int lengthOfLIS(std::vector<int>& nums)
	{
		if (nums.empty( ))
			return 0;

		std::vector<int> dp(nums.size( ), 1);

		for (int i = 0; i < nums.size( ); i++)
			for (int j = 0; j < i; j++)
			{
				if (nums[i] > nums[j])
					dp[i] = std::max(dp[i], dp[j] + 1);
			}

		return *std::max_element(dp.begin(), dp.end());
	}
};
#endif // !LONGEST_INCREASING_SUBSEQUENCE_H
