#include "soln.hpp"

void Solution::setZero(vector<vector<int>> &matrix, int row, int column)
{
	// set row to 0s
	for (int i = 0; i < matrix[0].size(); i++)
	{
		matrix[row][i] = 0;
	}
	// set column to 0s
	for (int i = 0; i < matrix.size(); i++)
	{
		matrix[i][column] = 0;
	}
}

void Solution::setZeroes(vector<vector<int>> &matrix)
{
	vector<pair<int, int>> marks;
	// for every row
	for (int i = 0; i < matrix.size(); i++)
	{
		// for every column
		for (int j = 0; j < matrix[0].size(); j++)
		{
			if (matrix[i][j] == 0)
			{
				marks.push_back(pair<int, int>{i, j});
			}
		}
	}
	for (auto it : marks)
	{
		setZero(matrix, it.first, it.second);
	}
}

bool Solution::test(vector<vector<int>> &matrix, vector<vector<int>>& answer)	{
	vector<vector<int>> mat_copy = vector<vector<int>>(matrix);
	setZeroes(mat_copy);
	return mat_copy == answer;
}