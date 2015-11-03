#ifndef WORD_PATTERN_H
#define WORD_PARRERN_H

#include <map>
#include <vector>
class Solution_290
{
public:
	bool wordPattern(std::string pattern, std::string str)
	{
		std::map<char, std::string> m1;
		std::map<std::string, char> m2;
		std::vector<std::string> word = getword(str);
		if (word.size( ) != pattern.size( ))
			return false;

		for (int i = 0; i < pattern.size( ); i++)
		{
			char c1 = pattern[i];
			std::string s1 = word[i];

			if (m1.count(c1))
				if (m1[c1] != s1)
					return false;

			if (m2.count(s1))
				if (m2[s1] != c1)
					return false;

			m1[c1] = s1;
			m2[s1] = c1;
		}

		return true;
	}

	std::vector<std::string> getword(std::string str)
	{
		std::vector<std::string> s1;
		std::string tmp;
		for (int i = 0; i < str.size( ); i++)
		{
			if (str[i] != ' ')
				tmp += str[i];
			else
			{
				s1.push_back(tmp);
				tmp.clear( );
			}
		}

		s1.push_back(tmp);
		return s1;
	}
};
#endif // !WORD_PATTERN_H
