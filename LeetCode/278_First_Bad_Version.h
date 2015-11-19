#ifndef FIRST_BAD_VERSION_H
#define FIRST_BAD_VERSION_H

class Solution_278
{
public:
	bool isBadVersion(int version)
	{
		if (version == 3)
			return true;
		else
			return false;
	}

	int firstBadVersion(int n)
	{
		if (isBadVersion(1))
			return 1;

		int t = 1;
		int f = n;
		int mid = t + (f - t) / 2;

		while (t != f && (f - t != 1))
		{
			if (isBadVersion(mid))
			{
				f = mid;
				mid = t + (f - t) / 2;
			}
			else
			{
				t = mid;
				mid = t + (f - t) / 2;
			}
		}

		return f;
	}
};

#endif // !FIRST_BAD_VERSION_H
