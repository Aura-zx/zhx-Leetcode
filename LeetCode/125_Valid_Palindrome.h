#ifndef VALID_PALINDROME_H
#define VALID_PALINDROME_H

#include <string>
#include <cctype>
#include <algorithm>
class Solution_125
{
public:
	bool isPalindrome(std::string s)
	{
		if (s.empty( ) || (s.length( ) == 1))
			return true;

		std::string ss = "";
		for (auto c : s)
			if (isalnum(c))
				ss += ::toupper(c);

		if (ss.empty( ))		// all the character is punctuation(,.!? etc)
			return true;
		int i = 0;
		int j = ss.length()-1;
		while (i != j)
		{
			if (ss[i] != ss[j])
				return false;
			if (i == j || (j - i == 1))
				break;
			else
			{
				i++;
				j--;
			}
		}
		return true;
	}
		
};


#endif // !VALID_PALINDROME_H
