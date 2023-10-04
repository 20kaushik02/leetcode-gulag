#include "soln.hpp"

int main()	{
	vector<int> nums = {1,2,3,4,4,3,1};
	int answer = 2;
	Solution soln;
	cout << "Found single number correctly? " << soln.test(nums, answer) << endl;
	return 0;
}