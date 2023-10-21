#include "soln.hpp"

int main()
{
	vector<int> nums{2, 7, 11, 15};
	int target = 9;
	vector<int> answer{0, 1};
	Solution soln;
	cout << "Found two-sum indices correctly? " << soln.test(nums, target, answer) << endl;
	return 0;
}