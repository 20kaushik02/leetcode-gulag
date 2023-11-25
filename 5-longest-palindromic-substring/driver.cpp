#include "soln.hpp"

int main()
{
	string s = "varorant";
	string answer = "arora";
	Solution soln;
	cout << "Found longest palindromic substring correctly? " << soln.test(s, answer) << endl;
	return 0;
}