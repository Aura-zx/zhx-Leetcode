// LeetCode.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "165_Compare_Version_Numbers.h"

#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	Solution_165 s = Solution_165( );
	string a("a ba");
	string v1("1.2");
	string v2("1.10");
	
	s.compareVersion(v1, v2);

	return 0;
}

