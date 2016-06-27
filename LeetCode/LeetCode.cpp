// LeetCode.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "18_4Sum.h"

#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	Solution_18 s = Solution_18( );
	vector<int> v1 = {0,0,0,0};
	vector<vector<int>> v2 = { {1} };
	int target = 2;

	s.fourSum(v1, 0);

	return 0;
}

