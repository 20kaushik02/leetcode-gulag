#include "soln.hpp"

int main()
{
	vector<int> heights = {1, 8, 6, 2, 5, 4, 8};
	int answer = 40;
	Solution soln;
	cout << "Found largest container size correctly? " << soln.test(heights, answer) << endl;
	return 0;
}