// LeetCode.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "283_Move_Zeros.h"

#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	Solution_283 s;
	vector<int> v = { 1, 2, 4, 0, 6, 0, 6, 8, 32, 0, 0 };
	s.moveZeroes(v);
	return 0;
}

