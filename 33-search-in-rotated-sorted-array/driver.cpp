#include "soln.hpp"

int main()
{
	vector<int> nums{4, 5, 6, 7, 0, 1, 2};
	int target = 0;
	int answer = 4;
	Solution soln;
	cout << "Searched rotated sorted array correctly? " << soln.test(nums, target, answer) << endl;
	return 0;
}