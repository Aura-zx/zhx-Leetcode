// LeetCode.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "299_Bulls_and_Cows.h"

#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	Solution_299 s = Solution_299( );
	string a("1122");
	string b("1222");

	
	cout << s.getHint(a, b);

	return 0;
}

