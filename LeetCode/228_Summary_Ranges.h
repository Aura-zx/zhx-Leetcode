#ifndef SUMMARY_RANGES_H
#define SUMMARY_RANGES_H

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution_228
{
public:
	vector<string> summaryRanges(vector<int> &nums)
	{
		vector<string> res = {};
		if (nums.empty() == true)
		{
			return res;
		}
		size_t i = 0;
		size_t j = 0;
		int lf = 0;
		int b;
		for (i = 0; i < nums.size( ); i=j+1)
		{
			b = nums.at(i);
			lf = 0;
			for (j = i; j < nums.size( ); j++)
			{
				int cur = nums.at(j);
				if (j == nums.size( )-1)
				{
					if (lf == 1)
					{
						string s1 = to_string(b);
						string s2 = to_string(cur);
						string tmp = s1 + "->" + s2;
						res.push_back(tmp);
						break;
					}
					else
					{
						string s1 = to_string(cur);
						res.push_back(s1);
						break;
					}
				}
				int tar = nums.at(j + 1);
				if (cur + 1 == tar)
				{
					lf = 1;			
					continue;
				}
				else
				{
					if (lf == 0)
					{
						string s1 = to_string(cur);
						res.push_back(s1);
						break;
					}
					else
					{
						string s1 = to_string(b);
						string s2 = to_string(cur);
						string tmp = s1 + "->" + s2;
						res.push_back(tmp);
						break;
					}
				}
			}
		}
		return res;
	}
};

#endif // !SUMMARY_RANGES_H
