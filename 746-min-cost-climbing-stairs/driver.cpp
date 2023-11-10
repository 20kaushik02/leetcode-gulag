#include "soln.hpp"

int main()
{
	vector<int> costs{1, 100, 1, 1, 1, 100, 1, 1, 100, 1};
	int answer = 6;
	Solution soln;
	cout << "Found min cost correctly? " << soln.test(costs, answer) << endl;
	return 0;
}