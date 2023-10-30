#include "soln.hpp"

void Solution::recurseParenthesis(vector<string> &result, string str, int left, int right)
{
	// base case
	if (left == 0 & right == 0)
	{
		result.push_back(str);
		return;
	}
	// opening parenthesis can be added, so add
	if (left > 0)
		recurseParenthesis(result, str + "(", left - 1, right);
	// closing parenthesis can be added, so add
	if (right > left)
		recurseParenthesis(result, str + ")", left, right - 1);
}

vector<string> Solution::generateParenthesis(int n)
{
	vector<string> result;
	recurseParenthesis(result, "", n, n);
	return result;
}