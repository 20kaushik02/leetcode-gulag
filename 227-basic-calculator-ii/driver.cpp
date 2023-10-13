#include "soln.hpp"

int main()
{
	string s = "4+1-3*10/2*5";
	int answer = -70;
	Solution soln;
	cout << "Evaluated expression correctly? " << soln.test(s, answer) << endl;
	return 0;
}