#ifndef LENGTH_OF_LAST_WORD_H
#define LENGTH_OF_LAST_WORD_H

#include <string>
using namespace std;

class Solution_58
{
public:
	int lengthOfLastWord(string s)
	{
		if (s.empty( ))		// check if s is empty
			return 0;

		size_t count = 0;	// length of last word
		bool flag = false;	// flag: if last k-position is space
		for (auto i = s.size( )-1; i >= 0; --i)
		{
			if (s.at(i) != ' ')
			{
				flag = true;	// no space lasts
				count++;
			}
			else if (s.at(i) == ' ' && flag == true)	// have been occured letter
				return count;

			if (i == 0)		// unsigned can't be negative number
				break;
		}

		return count;	// string just contain one word
	}
};
#endif // !LENGTH_OF_LAST_WORD_H
