#include "soln.hpp"

int main()
{
	string s = "kaushiknarayanravishankar";
	int answer = 2;
	Solution soln;
	cout << "Found first unique character correctly? " << soln.test(s, answer) << endl;
	return 0;
}