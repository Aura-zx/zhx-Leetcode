// LeetCode.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "63_Unique_Paths_II.h"

#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	Solution_63 s = Solution_63( );
	vector<vector<int>> v1 = { { 0, 0, 0 },
							   { 0, 1, 0 }, 
							   { 0, 0, 0 }};

	s.uniquePathsWithObstacles(v1);

	return 0;
}

