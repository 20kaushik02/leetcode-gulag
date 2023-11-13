#include "soln.hpp"

int main()
{
	vector<vector<int>> matrix = {{1, 3, 5, 7}, {10, 11, 16, 20}, {23, 30, 34, 60}};
	int target = 3;
	bool answer = true;
	Solution soln;
	cout << "Searched matrix correctly? " << soln.test(matrix, target, answer) << endl;
	return 0;
}