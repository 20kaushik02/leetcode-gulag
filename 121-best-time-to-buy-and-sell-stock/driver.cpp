#include "soln.hpp"

int main()
{
	vector<int> prices{7, 1, 5, 3, 6, 4};
	int answer = 5;
	Solution soln;
	cout << "Found max profit correctly? " << soln.test(prices, answer) << endl;
	return 0;
}