#include "soln.hpp"

int main()
{
	vector<int> nums{1, 1, 1, 2, 2, 3}, answer{1, 2};
	int k = 2;
	Solution soln;
	cout << "Found top frequent elements correctly? " << soln.test(nums, k, answer) << endl;
	return 0;
}