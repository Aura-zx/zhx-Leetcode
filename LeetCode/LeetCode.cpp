// LeetCode.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "13_Roman_to_Integer.h"

#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	Solution_13 s = Solution_13( );
	string as = "DCXXI";
	cout << s.romanToInt(as);
	return 0;
}

