#ifndef LONGEST_CONSECUTIVE_SEQUENCE_H
#define LONGEST_CONSECUTIVE_SEQUENCE_H

#include <algorithm>
#include <unordered_set>
#include <vector>
class Solution_128
{
public:
	int longestConsecutive(std::vector<int>& nums)
	{
		if (nums.empty( ))
			return 0;
		std::unordered_set<int> m;
		for (auto i : nums)
			m.insert(i);

		int maxlen = 1;
		for (int i = 0; i < nums.size( ); i++)
		{
			if (m.empty( ))
				break;
			int curlen = 0;
			int curnum = nums[i];
			
			// 取掉重复的数字
			while (m.count(curnum))
			{
				m.erase(curnum);
				curlen++;
				curnum++;
			}

			// 找比当前数字小的数字
			curnum = nums[i] - 1;
			while (m.count(curnum))
			{
				m.erase(curnum);
				curlen++;
				curnum--;
			}

			maxlen = std::max(maxlen, curlen);
		}

		return maxlen;
	}
};
#endif // !LONGEST_CONSECUTIVE_SEQUENCE_H
