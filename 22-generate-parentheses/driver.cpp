#include "soln.hpp"

int main()
{
	int n = 4;
	Solution soln;
	vector<string> result = soln.generateParenthesis(n);
	for (string str : result)
		cout << str << "\t";
	cout << endl;
	return 0;
}