#include "soln.hpp"

bool Solution::isValid(string s)
{
	if (s.length() == 1)
		return false;
	vector<char> bstack;
	for (char c : s)
	{
		switch (c)
		{
		case '(':
		case '[':
		case '{':
			bstack.push_back(c);
			break;
		case ')':
			if (bstack.size() < 1 || bstack.back() != '(')
				return false;
			else
				bstack.pop_back();
			break;
		case ']':
			if (bstack.size() < 1 || bstack.back() != '[')
				return false;
			else
				bstack.pop_back();
			break;
		case '}':
			if (bstack.size() < 1 || bstack.back() != '{')
				return false;
			else
				bstack.pop_back();
			break;
		}
	}
	return bstack.size() == 0;
}

bool Solution::test(string s, bool answer)	{
	return isValid(s) == answer;
}