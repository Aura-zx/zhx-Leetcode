#ifndef SUPER_UGLY_NUMBER_H
#define SUPER_UGLY_NUMBER_H

#include <vector>
class Solution_313
{
public:
	int nthSuperUglyNumber(int n, std::vector<int>& primes)
	{
		std::vector<int> ugly = { 1 };
		std::vector<int> point(primes.size(), 0);

		if (n == 1)
			return ugly[0];
		
		while (ugly.size( ) < n)
		{		
			int minv = INT_MAX;
			int mini = 0;

			for (int i = 0; i < primes.size( ); i++)
			{
				int tmp = ugly[point[i]] * primes[i];
				if (tmp < minv)
				{
					minv = tmp;
					mini = i;
				}
			}
			point[mini]++;

			if (minv != ugly.back( ))
				ugly.push_back(minv);
		}

		return ugly[n - 1];
	}
};
#endif // !SUPER_UGLY_NUMBER_H
