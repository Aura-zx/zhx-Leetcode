#ifndef REVERSE_STRING_H
#define REVERSE_STRING_H

#include <string>
class Solution_334
{
public:
	std::string reverseString(std::string s)
	{
		std::string ret;
		for (auto i = s.rbegin( ); i != s.rend( ); i++)
			ret.push_back(*i);

		return ret;
	}
};
#endif // !REVERSE_STRING_H
