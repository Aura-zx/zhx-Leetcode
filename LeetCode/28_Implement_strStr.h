#ifndef IMPLEMENT_STRSTR_H
#define IMPLEMENT_STRSTR_H

#include <string>
class Solution_28
{
public:
	int strStr(std::string haystack, std::string needle)
	{
		int ln = needle.length( );
		int lh = haystack.length( );
		if (!ln) return 0;
		if (!lh) return -1;

		for (int i = 0; i <= lh - ln; i++)
		{
			int n = i;
			for (int j = 0; j < needle.length( ); j++)
			{
				if (haystack[n++] != needle[j])
					break;

				if (j == needle.length( )-1)
					return i;
			}
		}
		return -1;
	}
};
#endif // !IMPLEMENT_STRSTR_H
