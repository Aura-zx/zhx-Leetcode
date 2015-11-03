// LeetCode.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "67_Add_Binary.h"

#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	Solution_67 s = Solution_67( );
	string a("1010");
	string b("1011");

	
	cout << s.addBinary(a, b);
	return 0;
}

