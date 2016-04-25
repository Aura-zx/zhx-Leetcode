// LeetCode.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "64_Minimum_Path_Sum.h"

#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	Solution_64 s = Solution_64( );
	vector<int> v1 = {10,1,2,7,6,1,5};
	vector<vector<int>> v2 = { { 1, 2, 3 }, { 4, 5, 6 } };
	int target = 7;

	s.minPathSum(v2);

	return 0;
}

