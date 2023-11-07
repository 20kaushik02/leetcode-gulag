#include "soln.hpp"

int main()
{
	int target = 12;
	vector<int> position{10, 8, 0, 5, 3};
	vector<int> speed{2, 4, 1, 1, 3};
	int answer = 3;
	Solution soln;
	cout << "Found car fleets correctly? " << soln.test(target, position, speed, answer) << endl;
	return 0;
}