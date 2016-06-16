#ifndef SEARCH_FOR_A_RANGE_H
#define SEARCH_FOR_A_RANGE_H

#include <vector>
class Solution_34
{
public:
	int lsearch(int left, int right, std::vector<int>& nums, int target)
	{
		while (left <= right)
		{
			int mid = (right - left) / 2 + left;
			if (nums[mid] < target)
				left = mid + 1;
			else
				right = mid - 1;
		}
		if (nums[left] != target)
			return -1;

		return left;
	}

	int rsearch(int left, int right, std::vector<int>& nums, int target)
	{
		while (left <= right)
		{
			int mid = (right - left) / 2 + left;
			if (nums[mid] > target)
				right = mid - 1;
			else
				left = mid + 1;
		}
		if (nums[right] != target)
			return -1;

		return right;
	}

	std::vector<int> searchRange(std::vector<int>& nums, int target)
	{
		std::vector<int> res;
		if (nums.empty( ))
			return res;

		int leftindex = lsearch(0, nums.size( ) - 1, nums, target);
		int rightindex = rsearch(0, nums.size( ) - 1, nums, target);

		res.push_back(leftindex);
		res.push_back(rightindex);

		return res;
	}
};
#endif // !SEARCH_FOR_A_RANGE_H
