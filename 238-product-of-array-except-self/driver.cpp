#include "soln.hpp"

int main()
{
	vector<int> nums{1, 2, 3, 4};
	vector<int> answer{24, 12, 8, 6};
	Solution soln;
	cout << "Found products correctly? " << soln.test(nums, answer) << endl;
	return 0;
}