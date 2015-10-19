#ifndef NIM_GAME_H
#define NIM_GAME_H

class Solution_292
{
public:
	bool canWinNim(int n)
	{
		if (n <= 0)
			return false;
		if (n % 4 == 0)
			return false;
		else
			return true;
	}

};

#endif // !NIM_GAME_H
