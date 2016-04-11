#ifndef MAXIMUM_PRODUCT_OF_WORD_LENGTHS_H
#define MAXIMIM_PRODUCT_OF_WORD_LENGTHS_H

#include <algorithm>
#include <string>
#include <vector>

class Solution_318
{
public:
	int maxProduct(std::vector<std::string>& words)
	{
		int ret = 0;
		std::vector<int> mask(words.size(), 0);
		for (int i = 0; i < words.size( ); i++)
		{
			for (auto c : words[i])
				mask[i] |= 1 << (c - 'a');

			for (int j = 0; j < i; j++)
			{
				if (!(mask[i] & mask[j]))
					ret = std::max(ret, (int)(words[i].length() * words[j].length()));
			}
		}
		return ret;
	}

};
#endif // !MAXIMUM_PRODUCT_OF_WORD_LENGTHS_H
