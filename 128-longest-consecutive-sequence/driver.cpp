#include "soln.hpp"

int main()
{
	vector<int> nums{100, 4, 200, 1, 3, 2};
	int answer = 4;
	Solution soln;
	cout << "Found longest consecutive sequence correctly? " << soln.test(nums, answer) << endl;
	return 0;
}