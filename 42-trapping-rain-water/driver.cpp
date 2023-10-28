#include "soln.hpp"

int main()
{
	vector<int> heights{0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
	int answer = 6;
	Solution soln;
	cout << "Found trapped water amount correctly? " << soln.test(heights, answer) << endl;
	return 0;
}