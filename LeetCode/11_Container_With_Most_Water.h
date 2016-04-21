#ifndef CONTAINER_WITH_MOST_WATER_H
#define CONTAINER_WITH_MOST_WATER_H

#include <algorithm>
#include <vector>

class Solution_11
{
public:
	int maxArea(std::vector<int>& height)
	{
		if (height.empty( ))
			return 0;

		int maxarea = 0;
		int left = 0;
		int right = height.size( ) - 1;
		while (left < right)
		{
			int curarea = std::min(height[left], height[right]) * (right - left);
			maxarea = std::max(curarea, maxarea);
			if (height[left] < height[right])
				left++;
			else if (height[left] > height[right])
				right--;
			else
			{
				left++;
				right--;
			}
		}

		return maxarea;
	}
};
#endif // !CONTAINER_WITH_MOST_WATER_H
