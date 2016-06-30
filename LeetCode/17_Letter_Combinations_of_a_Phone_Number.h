#ifndef LETTER_COMBINATIONS_OF_A_PHONE_NUMBER_H
#define LETTER_COMBINATIONS_OF_A_PHONE_NUMBER_H

#include <string>
#include <vector>
class Solution_17
{
public:
	std::vector<std::string> letterCombinations(std::string digits)
	{
		std::vector<std::string> res;
		if (digits.empty( ))
			return res;
		std::string charmap[10] = { "0", "1", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz" };
		
		res.push_back("");
		for (int i = 0; i < digits.size( ); i++)
		{
			std::vector<std::string> tmp;
			std::string chars = charmap[digits[i] - '0'];
			for (int j = 0; j < chars.size( ); j++)
				for (int k = 0; k < res.size(); k++)
					tmp.push_back(res[k] + chars[j]);
			
			res = tmp;
		}

		return res;
	}
};
#endif // !LETTER_COMBINATIONS_OF_A_PHONE_NUMBER_H
