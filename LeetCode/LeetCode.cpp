// LeetCode.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "36_Valid_Sudoku.h"

#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	Solution_36 s = Solution_36( );
	vector<vector<char>> t1 = 
	{ 
	{ '.', '8', '7', '6', '5', '4', '3', '2', '1'},
	{ '2', '.', '.', '.', '.', '.', '.', '.', '.'},
	{ '3', '.', '.', '.', '.', '.', '.', '.', '.'},
	{ '4', '.', '.', '.', '.', '.', '.', '.', '.'},
	{ '5', '.', '.', '.', '.', '.', '.', '.', '.'},
	{ '6', '.', '.', '.', '.', '.', '.', '.', '.'},
	{ '7', '.', '.', '.', '.', '.', '.', '.', '.'},
	{ '8', '.', '.', '.', '.', '.', '.', '.', '.'},
	{ '9', '.', '.', '.', '.', '.', '.', '.', '.'}, 
	};
	s.isValidSudoku(t1);
	cout << "";
	return 0;
}

