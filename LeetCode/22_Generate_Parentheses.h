#ifndef GENERATE_PARENTHESES_H
#define GENERATE_PARENTHESES_H

#include <string>
#include <vector>

class Solution_22
{
public:
	void combinPar(int leftNum, int rightNum, std::string s, std::vector<std::string>& res)
	{
		if (leftNum > rightNum)
			return;

		if (leftNum == 0 && rightNum == 0)
			res.push_back(s);

		if (leftNum > 0)
			combinPar(leftNum - 1, rightNum, s+'(', res);

		if (rightNum > 0)
			combinPar(leftNum, rightNum - 1, s+')', res);
	}

	std::vector<std::string> generateParentheses(int n)
	{
		std::vector<std::string> res;
		std::string s;
		if (n == 0)
			return res;

		combinPar(n, n, s, res);

		return res;
	}

};
#endif // !GENERATE_PARENTHESES_H
