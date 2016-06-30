#ifndef REPEAT_DNA_SEQUENCES_H
#define REPEAT_DNA_SEQUENCES_H

#include <map>
#include <string>
#include <vector>
class Solution_187
{
public:
	long str2long(std::string s)
	{
		long res = 0;
		for (int i = 0; i < 10; i++)
		{
			if (s[i] == 'A') { res = res * 10 + 1; }
			if (s[i] == 'T') { res = res * 10 + 2; }
			if (s[i] == 'C') { res = res * 10 + 3; }
			if (s[i] == 'G') { res = res * 10 + 4; }
		}

		return res;
	}

	std::string long2str(long idx)
	{
		std::string str = "";
		for (int i = 0; i < 10; i++)
		{
			int d = idx % 10;
			if (d == 1) { str = "A" + str; }
			if (d == 2) { str = "T" + str; }
			if (d == 3) { str = "C" + str; }
			if (d == 4) { str = "G" + str; }
			idx = idx / 10;
		}

		return str;
	}

	std::vector<std::string> findRepeatDnaSequences(std::string s)
	{
		std::map<long, int> m;
		std::vector<std::string> res;
		for (int i = 0; i < s.size( ); i++)
		{
			std::string sub = s.substr(i, 10);
			long idx = str2long(sub);
			if (m.find(idx) == m.end( ))
				m[idx] = 1;
			else
				m[idx]++;
		}

		for (auto i = m.begin( ); i != m.end( ); i++)
		{
			if (i->second > 1)
				res.push_back(long2str(i->first));
		}

		return res;
	}
};
#endif // !REPEAT_DNA_SEQUENCES_H

