// LeetCode.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "74_Search_a_2D_Matrix.h"

#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	Solution_74 s = Solution_74( );
	vector<int> v1 = {10,1,2,7,6,1,5};
	vector<vector<int>> v2 = { {1} };
	int target = 7;

	s.searchMatrix(v2, 0);

	return 0;
}

