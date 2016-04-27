#ifndef UGLY_NUMBER_II
#define UGLY_NUMBER_II

#include <algorithm>
#include <vector>
class Solution_264
{
public:
	int nthUglyNumber(int n)
	{	
		std::vector<int> ugly =  { 1 };

		if (n == 1)
			return ugly[0];

		int minv;
		
		int p2 = 0;
		int p3 = 0;
		int p5 = 0;

		while (ugly.size() < n)
		{
			int ugly2 = ugly[p2] * 2;
			int ugly3 = ugly[p3] * 3;
			int ugly5 = ugly[p5] * 5;

			minv = std::min(ugly2, std::min(ugly3, ugly5));
			if (minv == ugly2)
				p2++;
			if (minv == ugly3)
				p3++;
			if (minv == ugly5)
				p5++;

			if (minv != ugly.back())	// 去除重复的数字
				ugly.push_back(minv);
		}
		
		return ugly[n - 1];
	}
};
#endif // !UGLY_NUMBER_II
