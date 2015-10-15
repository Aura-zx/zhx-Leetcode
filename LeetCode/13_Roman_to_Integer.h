#ifndef ROMAN_TO_INTEGER_H
#define ROMAN_TO_INTEGER_H

#include <string>
#include <map>
class Solution_13
{
public:
	int romanToInt(std::string s)
	{
		if (s.empty( ))
			return 0;

		int result = 0;
		std::map<char, int> roman;
		roman['I'] = 1;
		roman['V'] = 5;
		roman['X'] = 10;
		roman['L'] = 50;
		roman['C'] = 100;
		roman['D'] = 500;
		roman['M'] = 1000;

		for (int i = s.length( )-1; i >= 0; i--)
		{
			if (i == s.length( ) - 1)
			{
				result = roman[s[i]];
				continue;
			}
			if (roman[s[i]] >= roman[s[i + 1]])
				result += roman[s[i]];
			else
				result -= roman[s[i]];
		}

		return result;
	}
};

#endif // !ROMAN_TO_INTEGER_H
