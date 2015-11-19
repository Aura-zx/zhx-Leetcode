#ifndef EXCEL_SHEET_COLUMN_TITLE_H
#define EXCEL_SHEET_COLUMN_TITLE_H

#include <algorithm>
#include <string>
#include <vector>
class Solution_168
{
public:
	std::string convertToTitle(int n)
	{
		std::string res = "";
		if (n <= 0)
			return res;

		while (n != 0)
		{
			int low = n % 26;
			if (low == 0)
				res += 'Z';
			else
				res += 'A' + low-1;
			n = (n-1) / 26;
		}
		
		reverse(res.begin( ), res.end( ));

		return res;
	}
};
#endif // !EXCEL_SHEET_COLUMN_TITLE_H
