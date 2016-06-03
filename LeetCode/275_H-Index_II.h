#ifndef HINDEX_II_H
#define HINDEX_II_H

#include <vector>
class Solution_275
{
public:
	int hIndex(std::vector<int>& citations)
	{
		int hindex = citations.size( );
		for (int i = 0; i < citations.size( ); i++)
		{
			if (citations[i] < hindex)
				hindex--;
			else
				break;
		}

		return hindex;
	}
};
#endif // !HINDEX_II_H
