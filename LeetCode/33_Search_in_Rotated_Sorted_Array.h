#ifndef SEARCH_IN_SORTED_ARRAY_H
#define SEARCH_IN_SORTED_ARRAY_H

#include <vector>
class Solution_33
{
public:
	int search(std::vector<int>& nums, int target)
	{
		int start = 0;
		int end = nums.size( ) - 1;

		while (start <= end)	// 等号解决只有一个元素的时候
		{
			int mid = start + (end - start) / 2;
			if (nums[mid] == target)
				return mid;
			if (nums[start] < nums[mid])
			{
				if (target >= nums[start] && target <= nums[mid])
					end = mid - 1;
				else
					start = mid + 1;
			}
			else if (nums[start] > nums[mid])
			{
				if (target >= nums[start] || target <= nums[mid])
					end = mid - 1;
				else
					start = mid + 1;
			}
			else // 只有两个元素的时候或一个元素
				start++;
		}

		return -1;
	}
};
#endif // !SEARCH_IN_SORTED_ARRAY_H
