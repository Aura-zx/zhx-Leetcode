#ifndef SUM_CLOSEST_H
#define SUM_CLOSEST_H

#include <algorithm>
#include <vector>
class Solution_16
{
public:
	int threeSumClosest(std::vector<int>& nums, int target)
	{
		if (nums.size( ) < 3)
			return INT_MAX;
		std::sort(nums.begin( ), nums.end( ));
		int minDiff = INT_MAX;
		for (int i = 0; i < nums.size( ) - 2; i++)
		{
			int left = i + 1;
			int right = nums.size( ) - 1;
			while (left < right)
			{
				int diff = nums[i] + nums[left] + nums[right] - target;
				if (abs(diff) < abs(minDiff))
					minDiff = diff;
				if (diff == 0)
					break;
				else if (diff < 0)
					left++;
				else
					right--;
			}
		}

		return target + minDiff;
	}
};
#endif // !3SUM_CLOSEST_H
