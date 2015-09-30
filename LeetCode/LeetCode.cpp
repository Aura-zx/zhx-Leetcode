// LeetCode.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "169_Majority_Element.h"

#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	Solution_169 s;
	vector<int> v = { 1, 1, 2, 2, 3, 0, 6, 8, 32, 0, 0 };
	int n = s.majorityElement(v);
	cout << n << endl;
	return 0;
}

