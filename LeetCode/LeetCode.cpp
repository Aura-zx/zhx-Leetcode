// LeetCode.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "313_Super_Ugly_Number.h"

#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	Solution_313 s = Solution_313( );
	vector<int> v1 = {2,7,13,19};
	vector<vector<int>> v2 = { {1} };
	int target = 7;

	s.nthSuperUglyNumber(4, v1);

	return 0;
}

