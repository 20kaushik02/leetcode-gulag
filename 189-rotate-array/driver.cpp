#include "soln.hpp"

int main()
{
	vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
	int k = 9;
	vector<int> answer = {6, 7, 1, 2, 3, 4, 5};
	Solution soln;
	cout << "Rotated array correctly? " << soln.test(nums, k, answer) << endl;
	return 0;
}