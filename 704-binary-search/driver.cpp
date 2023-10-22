#include "soln.hpp"

int main()
{
	vector<int> nums{-1, 0, 3, 5, 9, 12};
	int target = 9, answer = 4;
	Solution soln;
	cout << "Binary search done correctly ? " << soln.test(nums, target, answer) << endl;
	return 0;
}