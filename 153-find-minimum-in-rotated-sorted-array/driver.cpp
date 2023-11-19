#include "soln.hpp"

int main()
{
	vector<int> nums = {7, -1, 0, 1, 2, 3, 4, 5, 6};
	int answer = -1;
	Solution soln;
	cout << "Found minimum correctly? " << soln.test(nums, answer) << endl;
	return 0;
}