#ifndef DIFFERENT_WAYS_TO_ADD_PARAENTHESES_H
#define DIFFERENT_WAYS_TO_ADD_PARAENTHESES_H

#include <string>
#include <vector>

class Solution_241
{
public:
	int compute(int a, int b, char op)
	{
		switch (op)
		{
		case'+': return a + b;
		case'-': return a - b;
		case'*': return a * b;
		}
	}

	std::vector<int> diffWaysToCompute(std::string input)
	{
		int number = 0;
		int i = 0;
		for (; i < input.length( ) && isdigit(input[i]); i++)
			number = number * 10 + input[i] - '0';

		// pure number
		if (i == input.length( ))
			return{ number };
		std::vector<int> diffWays;
		std::vector<int> lefts;
		std::vector<int> rights;

		for (int i = 0; i < input.length( ); i++)
		{
			if (isdigit(input[i]))
				continue;
			lefts = diffWaysToCompute(input.substr(0, i));
			rights = diffWaysToCompute(input.substr(i + 1, input.length( ) - i - 1));

			for (int j = 0; j < lefts.size( ); j++)
				for (int k = 0; k < rights.size( ); k++)
					diffWays.push_back(compute(lefts[j], rights[k], input[i]));
		}

		return diffWays;
	}
};
#endif // !DIFFERENT_WAYS_TO_ADD_PARAENTHESES_H
