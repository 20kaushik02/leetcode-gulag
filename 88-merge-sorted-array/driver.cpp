#include "soln.hpp"
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
	vector<int> nums1 = vector<int>{1, 2, 3, 0, 0, 0};
	vector<int> nums2 = vector<int>{2, 5, 6};
	vector<int> answer = vector<int>{1, 2, 2, 3, 5, 6};
	Solution soln;
	cout << "Merged correctly? " << soln.test(nums1, 3, nums2, 3, answer) << endl;
	return 0;
}