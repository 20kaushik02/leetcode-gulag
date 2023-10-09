#include "soln.hpp"

int main()
{
	int m = 3, n = 7;
	int answer = 28;
	Solution soln;
	cout << "Found no. of paths correctly? " << soln.test(m, n, answer) << endl;
	return 0;
}