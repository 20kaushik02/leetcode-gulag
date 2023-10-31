#include "soln.hpp"

bool Solution::checkValidString(string s)
{
	int min_open = 0, max_open = 0;
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] == '(')
		{
			min_open++;
			max_open++;
		}
		else if (s[i] == ')')
		{
			min_open--;
			max_open--;
		}
		else
		{
			min_open--;
			max_open++;
		}
		if (max_open < 0)
			break;
		min_open = max(min_open, 0);
	}
	return min_open == 0;
}

bool Solution::test(string s, bool answer)
{
	return checkValidString(s) == answer;
}