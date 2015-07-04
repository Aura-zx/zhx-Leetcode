#ifndef VALID_NUMBER_H
#define VALID_NUMBER_H

#include <iostream>
#include <string>

using namespace std;
class Solution_65 
{
private:
	vector<string> test = vector<string>{"0", "0.1", "abc", "1 a", "2e10", "e", "1 ", " "};
	vector<bool> goal = vector<bool>{true, true, false, false, true, false, true, false};
public:
	bool isNumber(string s)
	{
		int dot = 0;
		for (auto i = s.begin(); i != s.end(); i++)
		{
			if ((*i) >= '0' && (*i) <= '9')
				continue;
			else if ((*i) == '.')
			{
				dot = 1;
				continue;
			}
			else if ((*i) == '.' && dot == 1)
				return false;
			else if (((*i) == 'e' || (*i) == 'E') && i != s.begin( ))
				continue;
			else if (((*i) == ' ') && (i == s.end( ) - 1) && (i != s.begin()))
				return true;
			else
				return false;
		}
		return true;
	}

	void Testcase(vector<string>& test, vector<bool>& goal)
	{
		int success = 0, failure = 0;
		int count = 1;
		auto j = test.begin();
		for(auto i = goal.begin(); i != goal.end(); i++, j++)
		{
			int sf = 0, ff = 0;
			if ((*i) == isNumber(*j))
			{
				sf = 1;
				success++;
			}
			else
			{
				ff = 1;
				failure++;
			}

			string s = to_string(count);
			cout << "Test case #" + s + ": " << sf - ff << endl;

			count++;
		}

		cout << "====================" << endl;
		cout << "Total: " << goal.size() << endl;
		cout << "Success:" << success << endl;
		cout << "Failure: " << failure << endl;
	}

	void Test()
	{
		Testcase(test, goal);
	}
};
#endif