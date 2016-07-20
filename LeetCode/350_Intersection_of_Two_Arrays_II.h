#ifndef INTERSECTION_OF_TWO_ARRAYS_II_H
#define INTERSECTION_OF_TWO_ARRAYS_II_H

#include <algorithm>
#include <map>
#include <vector>

class Solution_350
{
public:
	std::vector<int> intersect(std::vector<int>& nums1, std::vector<int>& nums2)
	{
		std::map<int, int> m1;
		std::vector<int> res;

		std::vector<int> st;
		std::vector<int> lar;
		if (nums1.size( ) < nums2.size( ))
		{
			st = nums1;
			lar = nums2;
		}
		else
		{
			st = nums2;
			lar = nums1;
		}

		for (auto i : st)
		{
			if (m1.find(i) == m1.end( ))
				m1[i] = 1;
			else
				m1[i]++;
		}

		for (auto i :lar)
		{
			if (m1[i] > 0)
			{
				res.push_back(i);
				m1[i]--;
			}
		}

		return res;
	}
};
#endif // !INTERSECTION_OF_TWO_ARRAYS_II_H
