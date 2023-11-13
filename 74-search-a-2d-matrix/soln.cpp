#include "soln.hpp"

bool Solution::searchMatrix(vector<vector<int>> &matrix, int target)
{
	int m = matrix.size(), n = matrix[0].size();
	if (m == 1 && n == 1)
	{
		return matrix[0][0] == target;
	}
	int low = 0, high = m - 1;
	int row_mid = (low + high) / 2, mid = -1;
	if (m != 1)
	{
		while (low < high)
		{
			if (matrix[row_mid][0] == target)
			{
				return true;
			}
			else
			{
				if (matrix[row_mid][0] > target)
				{
					high = row_mid;
				}
				else if (matrix[row_mid][n - 1] < target)
				{
					low = row_mid + 1;
				}
				else
				{
					break;
				}
			}
			row_mid = (low + high) / 2;
		}
	}
	low = 0, high = n - 1;
	mid = (low + high) / 2;
	while (low < high)
	{
		if (matrix[row_mid][mid] == target)
		{
			return true;
		}
		else if (matrix[row_mid][mid] < target)
		{
			low = mid + 1;
		}
		else
		{
			high = mid;
		}
		mid = (low + high) / 2;
	}
	return matrix[row_mid][mid] == target;
}

bool Solution::test(vector<vector<int>> &matrix, int target, bool answer)
{
	return searchMatrix(matrix, target) == answer;
}
