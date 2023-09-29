#include "soln.hpp"
#include <iostream>

int main()
{
	vector<int> nums = {2, 2, 1, 1, 1, 2, 2};
	int answer = 2;
	Solution soln;
	cout << "Majority element is correct? " << soln.test(nums, answer) << endl;
	return 0;
}