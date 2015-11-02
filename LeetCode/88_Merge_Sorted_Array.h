#ifndef MERGE_SORTED_ARRAY_H
#define	MERGE_SORTED_ARRAY_H

#include <vector>
#include <algorithm>
class Solution_88
{
public:
	void merge(std::vector<int>& nums1, int m, std::vector<int>& nums2, int n)
	{
		int end = nums1.capacity()-1;
		int i = m - 1;
		int j = n - 1;

		while (i >= 0 && j >= 0)
		{
			if (nums1[i] > nums2[j])
				nums1[end--] = nums1[i--];
			else
				nums1[end--] = nums2[j--];
		}

		while (i >= 0)
			nums1[end--] = nums1[i--];
		while (j >= 0)
			nums1[end--] = nums2[j--];
		if (end > 0)
			std::copy(nums1.begin( ) + end+1, nums1.end( ), nums1.begin( ));
	}
};

#endif // !MERGE_SORTED_ARRAY
