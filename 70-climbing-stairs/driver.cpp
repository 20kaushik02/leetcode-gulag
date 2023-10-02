#include "soln.hpp"

int main()
{
	int n = 9;
	int answer = 55;
	Solution soln;
	cout << "Found steps correctly? " << soln.test(n, answer) << endl;
	return 0;
}