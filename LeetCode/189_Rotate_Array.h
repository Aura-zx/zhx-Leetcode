#ifndef ROTATE_ARRAY_H
#define ROTATE_ARRAY_H

#include <algorithm>
#include <vector>
class Solution_189
{
public:
	void rotate(std::vector<int>& nums, int k)
	{
		if (nums.empty( ) || k ==0)
			return;
		int n = nums.size( );
		k = k % n;
		if (k != 0)
		{
			ownreverse(nums, 0, n - k - 1);
			ownreverse(nums, n - k, n-1);
			ownreverse(nums, 0, n-1);
		}
	}

	void ownreverse(std::vector<int>& nums, int start, int end)
	{
		while (start < end)
		{
			int tmp = nums[start];
			nums[start] = nums[end];
			nums[end] = tmp;
			start++;
			end--;
		}
	}
};

#endif // !RATATE_ARRAY_H
