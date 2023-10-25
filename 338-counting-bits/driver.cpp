#include "soln.hpp"

int main()
{
	int n = 7;
	vector<int> answer{0, 1, 1, 2, 1, 2, 2, 3};
	Solution soln;
	cout << "Counted bits correctly? " << soln.test(n, answer) << endl;
	return 0;
}