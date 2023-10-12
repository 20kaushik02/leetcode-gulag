#include "soln.hpp"

int main()
{
	vector<vector<int>> matrix{{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
	vector<vector<int>> answer{{7, 4, 1}, {8, 5, 2}, {9, 6, 3}};
	Solution soln;
	cout << "Rotated image matrix correctly? " << soln.test(matrix, answer) << endl;
	return 0;
}