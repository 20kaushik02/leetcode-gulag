#include "soln.hpp"

int main()
{
	vector<int> temps{73, 74, 75, 71, 69, 72, 76, 73};
	vector<int> answer{1, 1, 4, 2, 1, 1, 0, 0};
	Solution soln;
	cout << "Found next warmer days correctly? " << soln.test(temps, answer) << endl;
	return 0;
}