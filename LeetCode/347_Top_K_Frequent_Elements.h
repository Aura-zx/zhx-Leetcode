#ifndef TOP_K_FREQUENT_ElEMENTS_H
#define TOP_K_FREQUENT_ELEMENTS_H

#include <algorithm>
#include <map>
#include <vector>

class Solution_347
{
public:
	std::vector<int> topKFrequent(std::vector<int>& nums, int k)
	{
		std::map<int, int> m;
		std::vector<std::pair<int, int>> p;
		std::vector<int> ret;

		auto cmp = [](std::pair<int, int> const &a, std::pair<int, int> const &b)
		{
			return a.second > b.second;
		};

		for (int i = 0; i < nums.size( ); i++)
		{
			if (m.count(nums[i]))
				m[nums[i]]++;
			else
				m[nums[i]] = 1;
		}

		for (auto i = m.rbegin(); i != m.rend(); i++)
			p.push_back((*i));

		sort(p.begin( ), p.end( ), cmp);

		for (int i = 0; i < k; i++)
		{
			ret.push_back(p[i].first);
		}
		return ret;
	}
};
#endif // !TOP_K_FREQUENT_ElEMENTS_H
