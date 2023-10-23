#include "soln.hpp"

bool Solution::isValidSudoku(vector<vector<char>> &board)
{
	unordered_map<char, bool> appeared;
	// check rows
	for (int i = 0; i < 9; i++)
	{
		appeared.clear();
		for (int j = 0; j < 9; j++)
		{
			char checker = board[i][j];
			if (checker == '.')
				continue;
			if (appeared.find(checker) != appeared.end())
				return false;
			appeared[checker] = true;
		}
	}
	// check columns
	for (int i = 0; i < 9; i++)
	{
		appeared.clear();
		for (int j = 0; j < 9; j++)
		{
			char checker = board[j][i];
			if (checker == '.')
				continue;
			if (appeared.find(checker) != appeared.end())
				return false;
			appeared[checker] = true;
		}
	}
	// check grids
	for (int i = 0; i < 9; i++)
	{
		appeared.clear();
		for (int j = 0; j < 3; j++)
		{
			for (int k = 0; k < 3; k++)
			{
				char checker = board[((i / 3) * 3) + j][((i * 3) % 9) + k];
				if (checker == '.')
					continue;
				if (appeared.find(checker) != appeared.end())
					return false;
				appeared[checker] = true;
			}
		}
	}
	return true;
}

bool Solution::test(vector<vector<char>> &board, bool answer)
{
	return isValidSudoku(board) == answer;
}