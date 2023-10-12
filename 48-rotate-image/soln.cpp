#include "soln.hpp"

void Solution::rotate(vector<vector<int>> &matrix)
{
	// take your phone
	// flip it top over bottom
	reverse(matrix.begin(), matrix.end());
	// then flip it across its leading diagonal
	// voila, 90 degree rotation!
	for (int i = 0; i < matrix.size(); i++)
	{
		for (int j = i; j < matrix[0].size(); j++)
		{
			swap(matrix[i][j], matrix[j][i]);
		}
	}
}

bool Solution::test(vector<vector<int>> &matrix, vector<vector<int>> &answer)
{
	vector<vector<int>> mat_copy(matrix);
	rotate(mat_copy);
	return mat_copy == answer;
}