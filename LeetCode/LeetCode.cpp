// LeetCode.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "347_Top_K_Frequent_Elements.h"

#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	Solution_347 s = Solution_347( );
	vector<int> v1 = {1,1,1,2,2,3};
	vector<vector<int>> v2 = { {1} };
	int target = 2;

	s.topKFrequent(v1, 2);

	return 0;
}

