#ifndef VALID_SUDOKU_H
#define VALID_SUDOKU_H

#include <vector>
#include <map>
class Solution_36
{
public:
	bool isValidSudoku(std::vector<std::vector<char>>& board)
	{
		for (int i = 0; i < 9; i++)
		{
			if (!checkRow(board, i))
				return false;
			if (!checkCol(board, i))
				return false;
		}

		return checkBlock(board);
	}

	bool checkRow(std::vector<std::vector<char>>& board, int index)
	{
		std::map<char, bool> m1;
		for (int i = 0; i < 9; i++)
		{
			if (board[index][i] != '.')
			{
				if (m1.count(board[index][i]))
					return false;
				else
					m1[board[index][i]] = true;
			}
		}
		return true;
	}

	bool checkCol(std::vector<std::vector<char>>& board, int index)
	{
		std::map<char, bool> m1;
		for (int i = 0; i < 9; i++)
		{
			if (board[i][index] != '.')
			{
				if (m1.count(board[i][index]))
					return false;
				else
					m1[board[i][index]] = true;
			}
		}
		return true;
	}

	bool checkBlock(std::vector<std::vector<char>>& board)
	{
		std::map<char, bool> m1;
		for (int i = 0; i < 9; i += 3)
		{
			for (int j = 0; j < 9; j += 3)
			{
				m1.clear( );
				for (int m = 0; m < 3; m++)
				{
					for (int n = 0; n < 3; n++)
					{
						if (board[m + i][n + j] != '.')
							if (m1.count(board[m + i][n + j]))
								return false;
							else
								m1[board[m + i][n + j]] = true;
					}
				}
			}
		}
	}
};

#endif // !VALID_SUDOKU_H
