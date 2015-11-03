#ifndef ISOMORPHIC_STRINGS_H
#define	ISOMORPHIC_STRINGS_H

#include <map>
class Solution_205
{
public:
	bool isIsomorphic(std::string s, std::string t)
	{
		std::map<char,char> ms;
		std::map<char,char> mt;
		for (size_t i = 0; i < s.size( ); i++)
		{
			char c1 = s[i];
			char c2 = t[i];
			if (ms.count(c1))
			{
				if (ms[c1] != c2)
					return false;
			}
			if (mt.count(c2))
			{
				if (mt[c2] != c1)
					return false;
			}
			ms[c1] = c2;
			mt[c2] = c1;
		}

		return true;
	}
};

#endif // !ISOMORPHIC_STRINGS_H
