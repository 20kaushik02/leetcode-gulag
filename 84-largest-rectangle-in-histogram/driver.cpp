#include "soln.hpp"

int main()
{
	vector<int> heights{2, 1, 5, 6, 2, 3};
	int answer = 10;
	Solution soln;
	cout << "Found largest rectangle area correctly? " << soln.test(heights, answer) << endl;
	return 0;
}