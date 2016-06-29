#ifndef REVERSE_WORDS_IN_A_STRING_H
#define REVERSE_WORDS_IN_A_STRING_H

#include <iostream>
#include <sstream>
#include <string>
#include <vector>
class Solution_151
{
public:
	void reverseWords(std::string &s)
	{
		if (s.empty( ))
			return;

		std::string res;
		std::string word;

		for (int i = s.size( ) - 1; i >= 0; i--)
		{
			if (isspace(s[i]))
			{
				if (i < s.size( ) - 1 && !isspace(s[i + 1]))
				{
					std::reverse(word.begin( ), word.end( ));
					res.append(word+" ");
					word.clear( );
				}
			}
			else
				word.push_back(s[i]);
		}

		if (!isspace(s[0]))
		{
			std::reverse(word.begin( ), word.end( ));
			res.append(word);
		}
		else if (!res.empty( ))
			res.pop_back( );

		s = res;
	}
};
#endif // !REVERSE_WORDS_IN_A_STRING_H
