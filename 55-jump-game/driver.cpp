#include "soln.hpp"

int main()	{
	vector<int> nums = {3,2,1,0,4};
	bool answer = false;
	Solution soln;
	cout << "Checked if can jump correctly? " << soln.test(nums, answer) << endl;
	return 0;
}