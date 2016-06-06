#ifndef VERIFY_PREORDER_SERIALIZATION_OF_A_BINARY_TREE_H
#define VERIFY_PREORDER_SERIALIZATION_OF_A_BINARY_TREE_H

#include <iostream>
#include <sstream>
#include <stack>
#include <string>
#include <vector>

class Solution_331
{
public:
	std::vector<std::string> split(const std::string& str)
	{
		std::stringstream ss(str);
		std::vector<std::string> res;
		std::string s;

		while (std::getline(ss, s, ','))
			res.push_back(s);

		return res;
	}

	bool isValidSerialization(std::string preorder)
	{
		if (preorder.empty( ))
			return false;

		std::vector<std::string> res = split(preorder);
		std::stack<std::string> s;

		for (int i = 0; i < res.size( ); i++)
		{
			if (res[i] == "#")
			{
				if (s.empty( ))
					return i == (res.size( ) - 1);
				s.pop( );
			}
			else
				s.push(res[i]);
		}

		return false;
	}

	bool isValidSerialization2(std::string preorder)
	{
		std::vector<std::string> nodes = split(preorder);
		int diff = 1;
		for (auto s : nodes)
		{
			if (--diff < 0)
				return false;
			if (s == "#")
				diff += 2;
		}

		return diff == 0;
	}
};
#endif // !VERIFY_PREORDER_SERIALIZATION_OF_A_BINARY_TREE_H
