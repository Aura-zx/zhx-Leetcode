// LeetCode.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "35_Search_Insert_Position.h"
#include "65_Valid_Number.h"
#include "14_Longest_Common_Prefix.h"
#include "217_Contains_Duplicate.h"
#include "219_Contains_Duplicate_II.h"
#include "58_Length_of_Last_Word.h"

int _tmain(int argc, _TCHAR* argv[])
{
	Solution_58 sol = Solution_58( );
	string s = "a  ";
	cout << sol.lengthOfLastWord(s);
	
	return 0;
}

