#include "soln.hpp"

int main()
{
	vector<vector<char>> grid{{'1', '1', '1', '1', '0'},
							  {'1', '1', '0', '1', '0'},
							  {'1', '1', '1', '0', '1'},
							  {'0', '0', '0', '1', '1'}};
	int answer = 2;
	Solution soln;
	cout << "Found no. of islands correctly? " << soln.test(grid, answer) << endl;
	return 0;
}