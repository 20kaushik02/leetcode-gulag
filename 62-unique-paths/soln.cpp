#include "soln.hpp"

int Solution::uniquePaths(int m, int n)
{
	int grid[m][n];
	// initial condition
	grid[0][0] = 1;
	// first row all else 1s: only right moves
	for (int i = 1; i < n; i++)
	{
		grid[0][i] = 1;
	}

	// first column all 1s: only down moves
	for (int j = 1; j < m; j++)
	{
		grid[j][0] = 1;
	}

	// no. of paths to a cell = sum of no. of paths to left and top cells
	for (int i = 1; i < m; i++)
	{
		for (int j = 1; j < n; j++)
		{
			grid[i][j] = grid[i - 1][j] + grid[i][j - 1];
		}
	}
	return grid[m - 1][n - 1];
}

bool Solution::test(int m, int n, int answer)
{
	return uniquePaths(m, n) == answer;
}