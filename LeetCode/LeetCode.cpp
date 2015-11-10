// LeetCode.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "7_Reverse_Integer.h"

#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	Solution_7 s = Solution_7( );
	string a("1010");
	string b("1011");

	
	cout << s.reverse(123);
	cout << s.reverse(-123);
	return 0;
}

