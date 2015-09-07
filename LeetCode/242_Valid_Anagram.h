#ifndef VALID_ANAGRAN_H
#define VALID_ANAGRAM_H

#include <iostream>
#include <algorithm>
class Solution_242
{
public:
	bool isAnagram(std::string s, std::string t)
	{
		sort(s.begin( ), s.end( ));
		sort(t.begin( ), t.end( ));
		if (s == t)
			return true;
		else
			return false;
	}
};


#endif // !VALID_ANAGRAN_H
