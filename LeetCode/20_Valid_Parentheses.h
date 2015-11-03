#ifndef VALID_PARENTHESES_H
#define VALID_PARENTHESES_H

#include <stack>
class Solution_20
{
public:
	bool isValid(std::string s)
	{
		if (s.empty( ))
			return false;

		std::stack<char> ps;
		ps.push(s[0]);
		for (size_t i = 1; i < s.size( ); i++)
		{
			if (s[i] == '(' || s[i] == '[' || s[i] == '{')
			{
				ps.push(s[i]);
				continue;
			}

			if (ps.size( ) == 0)		// too much ')' && '}' && ']'
				return false;
			char current = ps.top();
			if (s[i] == ')' && current != '(')
				return false;
			if (s[i] == ']' && current != '[')
				return false;
			if (s[i] == '}' && current != '{')
				return false;
			ps.pop();
		}

		if (ps.size( ) != 0)
			return false;

		return true;
	}

};
#endif // !VALID_PARENTHESES_H
