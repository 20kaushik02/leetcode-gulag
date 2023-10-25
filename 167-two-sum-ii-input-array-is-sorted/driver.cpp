#include "soln.hpp"

int main()	{
	vector<int> nums{-1,2,3,7,9,11,15};
	vector<int> answer{1,6};
	int target = 10;
	Solution soln;
	cout << "Found two sum correctly? " << soln.test(nums, target,answer) << endl;
	return 0;
}