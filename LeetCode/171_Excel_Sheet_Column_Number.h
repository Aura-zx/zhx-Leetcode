#ifndef EXCEL_SHEET_COLUMN_NUMBER_H
#define EXCEL_SHEET_COLUMN_NUMBER_H

#include <string>
#include <iostream>
class Solution_171
{
public:
	int titleToNumber(std::string s)
	{
		if (s.empty( ))
			return 0;

		long double sum = 0;			// int will out of range
		int base = 0;
		int exp = 0;
		for (size_t i = 0; i < s.length(); i++)
		{
			base = s[i] - 'A' + 1;
			exp = s.length( ) - i - 1;
			std::cout << base << "*26^" << exp << std::endl;	// test
			sum += base*powf(26, exp);
		}

		return sum;
	}
};
#endif // !EXCEL_SHEET_COLUMN_NUMBER_H
