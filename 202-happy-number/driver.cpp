#include "soln.hpp"

int main()
{
	int n = 42;
	bool answer = false;
	Solution soln;
	cout << "Checked happy number correctly? " << soln.test(n, answer) << endl;
	return 0;
}