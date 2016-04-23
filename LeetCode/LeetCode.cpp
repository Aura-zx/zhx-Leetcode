// LeetCode.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "40_Combination_Sum_II.h"

#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	Solution_40 s = Solution_40( );
	vector<int> v1 = {10,1,2,7,6,1,5};
	int target = 7;

	s.combinationSum2(v1, target);

	return 0;
}

