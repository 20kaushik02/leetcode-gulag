#include "soln.hpp"

int main()
{
	vector<int> piles{30, 23, 11, 4, 20};
	int h = 5, answer = 30;
	Solution soln;
	cout << "Found minimum k correctly? " << soln.test(piles, h, answer) << endl;
	return 0;
}