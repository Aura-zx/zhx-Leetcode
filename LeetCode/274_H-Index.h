#ifndef HINDEX_H
#define HINDEX_H

#include <algorithm>
#include <vector>
class Solution_274
{
public:
	int hIndex(std::vector<int>& citations)
	{
		std::sort(citations.begin( ), citations.end( ));

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
#endif // !H-INDEX_H
