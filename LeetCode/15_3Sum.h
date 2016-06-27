#ifndef THREE_SUM_H
#define THREE_SUM_H

#include <algorithm>
#include <vector>
class Solution_15
{
public:
	std::vector<std::vector<int>> threeSum(std::vector<int>& nums)
	{
		std::vector<std::vector<int>> res;
		if (nums.size( ) < 3)
			return res;
		std::sort(nums.begin( ), nums.end( ));
		for (int i = 0; i < nums.size( ); i++)
		{
			if (i > 0 && nums[i] == nums[i - 1])
				continue;
			int left = i + 1;
			int right = nums.size( ) - 1;
			while (left < right)
			{
				int curSum = nums[left] + nums[right];
				int curTar = -nums[i];
				if (curSum == curTar)
				{
					res.push_back({ nums[left], nums[right], nums[i] });
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

		return res;
	}
};
#endif // !THREE_SUM_H
