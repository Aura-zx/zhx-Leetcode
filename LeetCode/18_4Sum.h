#ifndef FOUR_SUM_H
#define FOUR_SUM_H

#include <algorithm>
#include <vector>

class Solution_18
{
public:
	std::vector<std::vector<int>> fourSum(std::vector<int>& nums, int target)
	{
		std::vector<std::vector<int>> res;
		if (nums.size( ) < 4)
			return res;
		std::sort(nums.begin( ), nums.end( ));
		for (int i = 0; i < nums.size( ); i++)
		{
			if (i > 0 && nums[i] == nums[i - 1])
				continue;
			for (int j = i + 1; j < nums.size( ); j++)
			{
				if (j > i+1 && nums[j] == nums[j - 1])
					continue;
				int left = j + 1;
				int right = nums.size( ) - 1;
				while (left < right)
				{
					int curSum = nums[left] + nums[right];
					int curTar = target-nums[i]-nums[j];
					if (curSum == curTar)
					{
						res.push_back({ nums[i], nums[j], nums[left], nums[right] });
						left++;
						right--;
						while (nums[left] == nums[left - 1])
							left++;
						while (nums[right] == nums[right + 1])
							right--;
					}
					else if (curSum > curTar)
						right--;
					else
						left++;
				}
			}
		}

		return res;
	}
};
#endif // !FOUR_SUM_H
