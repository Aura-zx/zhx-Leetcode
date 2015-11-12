// LeetCode.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "28_Implement_strStr.h"

#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	Solution_28 s = Solution_28( );
	string a("abab");
	string b("abab");

	
	cout << s.strStr(a, b);

	return 0;
}

