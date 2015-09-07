// LeetCode.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "242_Valid_Anagram.h"

#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	Solution_242 s;
	string a = "abc";
	string t = "bac";
	cout << s.isAnagram(a,t);

	return 0;
}

