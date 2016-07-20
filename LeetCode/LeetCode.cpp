// LeetCode.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "287_Find_the_Duplicate_Number.h"

#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	Solution_287 s = Solution_287( );
	vector<int> v1 = {1,1};
	vector<int> v2 = { 2 };
	vector<vector<int>> v3 = { {1} };
	int target = 2;

	s.findDuplicat(v1);

	return 0;
}

