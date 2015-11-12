#ifndef BULLS_AND_COWS_H
#define BULLS_AND_COWS_H

#include <string>
#include <map>
#include <vector>
class Solution_299
{
public:
	std::string getHint(std::string secret, std::string guess)
	{
		std::string res = "";
		if (secret.size( ) == 0 || guess.size( ) == 0)
			return res;

		std::vector<int> tag(secret.size( ), false);
		std::map<char, int> elem;
		for (int i = 0; i < secret.size( ); i++)
			elem[secret[i]]++;

		int bulls = 0;
		int cows = 0;
		// find the right value && position
		for (int i = 0; i < guess.size( ); i++)
		{
			if (secret[i] == guess[i])
			{
				bulls++;
				elem[secret[i]]--;
				tag[i] = true;
			}
		}

		// find the right value but wrong position
		for (int i = 0; i < guess.size( ); i++)
		{
			if (!tag[i] && elem[guess[i]] > 0)
			{
				cows++;
				elem[guess[i]]--;
			}
		}
		
		res = std::to_string(bulls) + "A" + std::to_string(cows) + "B";

		return res;
	}
};

#endif // !BULLS_AND_COWS_H
