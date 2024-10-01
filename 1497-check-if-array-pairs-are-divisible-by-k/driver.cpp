#include "soln.hpp"

int main()
{
	Solution soln;
	vector<int> arr{1, 2, 3, 4, 5, 6};
	int k = 10;
	bool answer = false;
	cout << "Checked pairings correctly? " << endl;
	cout << soln.test(arr, k, answer) << endl;
	return 0;
}