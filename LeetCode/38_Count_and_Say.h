#ifndef COUNT_AND_SAY_H
#define COUNT_AND_SAY_H

#include <string>
#include <map>
class Solution_38
{
public:
	std::string countAndSay(int n)
	{
		if (n < 1)
			return "";
		std::string prev = "1";

		for (int i = 2; i <= n; i++)
		{
			char curchar = prev[0];
			int times = 1;
			std::string tmp;
			prev.push_back('#');
			for (int k = 1; k < prev.size( ); k++)
			{
				if (prev[k] == curchar)
					times++;
				else
				{
					tmp += std::to_string(times);
					tmp.push_back(curchar);
					curchar = prev[k];
					times = 1;
				}
			}
			prev = tmp;
		}

		return prev;
	}

};

#endif // !COUNT_AND_SAY_H
