// LeetCode.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "189_Rotate_Array.h"

#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	Solution_189 s = Solution_189( );
	string a("a ba");
	vector<int> b = { 1, 2, 3, 4 };

	
	s.rotate(b,2);

	return 0;
}

