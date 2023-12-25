#include "soln.hpp"

int main()
{
	string num1 = "123", num2 = "456", answer = "56088";
	Solution soln;
	cout << "Multiplied strings correctly? " << soln.test(num1, num2, answer) << endl;
	return 0;
}