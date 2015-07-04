#ifndef SEARCH_INSERT_POSITION_H
#define SEARCH_INSERT_POSITION_H

#include <vector>
#include <iostream>
#include <string>

using namespace std;

class Solution_35 {
private:
	vector<int> t1 = vector<int>{ 1, 3, 5, 6 };
	vector<int> target = vector<int>{ 5, 2, 7, 0 };
	vector<int> goal = vector<int>{ 2, 1, 4, 0 };

	vector<int> t2 = vector<int>{ 1, 3 };
	vector<int> target2 = vector<int>{ 3 };
	vector<int> goal2 = vector<int>{ 1 };

	vector<int> t3 = vector<int>{ 1 };
	vector<int> target3 = vector<int>{ 2 };
	vector<int> goal3 = vector<int>{ 1 };

	vector<int> t4 = vector<int>{ 2, 5 };
	vector<int> target4 = vector<int>{ 1 };
	vector<int> goal4 = vector<int>{ 0 };

public:
	int searchInsert(vector<int>& nums, int target) {
		size_t begin = 0;
		size_t end = nums.size() - 1;
		size_t mid = begin + (end - begin) / 2;
		while (1)
		{
			// find target without begin, end
			if (target > nums[mid])
			{
				begin = mid;
				mid = begin + (end - begin) / 2;
			}
			else if (target < nums[mid])
			{
				end = mid;
				mid = begin + (end - begin) / 2;
			}
			else
				return mid;
			
			// can't find target and check begin, end
			if (begin == mid)
				if (target > nums[end])
					return end + 1;
				else if (target > nums[begin] && target < nums[end])
					return end;
				else if (target < nums[begin])
				{
					if (begin == 0)
						return 0;
					else
						return begin - 1;
				}
				else if (target == nums[end])
					return end;
				else if (target == nums[begin])
					return begin;
	
		}
	}

	void Testcase(vector<int>& nums, vector<int>& target, vector<int>& goal)
	{
		int testcase = 0, success = 0, failure = 0;
		int count = 1;
		auto j = target.begin();
		for (auto i = goal.begin(); i != goal.end(); i++, j++)
		{
			int sf = 0, ff = 0;
			if ((*i) == searchInsert(nums, *j))
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
			cout << "Test case #" + s + ": " << (sf - ff) << endl;

			count++;
		}

		cout << "========================" << endl;
		cout << "Total:   " << goal.size() << endl;
		cout << "Success: " << success << endl;
		cout << "Failure: " << failure << endl << endl;
	}

	void Test()
	{
		Testcase(t1, target, goal);
		Testcase(t2, target2, goal2);
		Testcase(t3, target3, goal3);
		Testcase(t4, target4, goal4);
	}
};

#endif