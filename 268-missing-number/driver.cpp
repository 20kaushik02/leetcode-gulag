#include "soln.hpp"

int main()
{
	vector<int> nums{9, 6, 4, 2, 3, 5, 7, 0, 1};
	int answer = 8;
	Solution soln;
	cout << "Found missing number correctly? " << soln.test(nums, answer) << endl;
	return 0;
}