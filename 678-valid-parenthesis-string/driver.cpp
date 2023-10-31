#include "soln.hpp"

int main()
{
	string s = "((**)((()))";
	bool answer = true;
	Solution soln;
	cout << "Validated parenthesis string correctly? " << soln.test(s, answer) << endl;
	return 0;
}