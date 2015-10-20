#ifndef HAPPY_NUMBER_H
#define HAPPY_NUMBER_H

#include <map>
#include <set>

class Solution_202
{
public:
	bool isHappy(int n)
	{
		if (n < 0)
			return false;

		std::set<int> cycle;
		while (n != 1)
		{
			if (cycle.count(n))
				return false;
			else
				cycle.insert(n);

			int sum = 0;
			while (n > 0)
			{
				sum += (n % 10)*(n % 10);
				n = n / 10;
			}
			n = sum;
		}
		return true;
	}

};

#endif // !HAPPY_NUMBER_H
