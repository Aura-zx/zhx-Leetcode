// LeetCode.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "1_Two_Sum.h"

#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	Solution_1 s = Solution_1( );
	vector<int> v1 = { 0, 3, 4, 0 };
	int target = 0;

	s.twoSum(v1, target);

	return 0;
}

