// LeetCode.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "350_Intersection_of_Two_Arrays_II.h"

#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	Solution_350 s = Solution_350( );
	vector<int> v1 = {1,2,2,1};
	vector<int> v2 = { 2 };
	vector<vector<int>> v3 = { {1} };
	int target = 2;

	s.intersect(v1, v2);

	return 0;
}

