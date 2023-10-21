#include "soln.hpp"

int main()
{
	string s = "({[[[]]]})";
	bool answer = true;
	Solution soln;
	cout << "Checked parentheses correctly? " << soln.test(s, answer) << endl;
	return 0;
}