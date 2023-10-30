#include "soln.hpp"

int main()
{
	vector<string> tokens{"10", "6", "9", "3", "+", "-11", "*", "/", "*", "17", "+", "5", "+"};
	int answer = 22;
	Solution soln;
	cout << "Evaluated postfix expression correctly? " << soln.test(tokens, answer) << endl;
	return 0;
}