#include "soln.hpp"

int main()
{
	string s = "A man, a plan, a canal: Panama";
	bool answer = true;
	Solution soln;
	cout << "Checked palindrome correctly? " << soln.test(s, answer) << endl;
	return 0;
}