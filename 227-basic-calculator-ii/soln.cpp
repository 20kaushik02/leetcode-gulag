#include "soln.hpp"

int Solution::calculate(string s)
{
	unordered_map<char, int> precedences{{'/', 2}, {'*', 2}, {'+', 1}, {'-', 1}};
	int cur_int = 0;
	vector<int> values;
	vector<char> ops;
	for (int i = 0; i < s.length(); i++)
	{
		char c = s[i];
		if (c == ' ')
			continue;
		// digit, get the number (only positive nums)
		if (isdigit(c))
		{
			cur_int = 0;
			while (i < s.size() && isdigit(c))
			{
				cur_int *= 10;
				cur_int += c - '0';
				i++;
				if (i == s.length())
					break;
				c = s[i];
			}
			i--;
			values.push_back(cur_int);
			cur_int = 0;
		}
		// operator
		else
		{
			// if operator stack not empty
			while (ops.empty() != true)
			{
				// new one is equal or lower, pop and perform old op first
				if (precedences.at(ops.back()) >= precedences.at(c))
				{
					char op = ops.back();
					ops.pop_back();
					int val2 = values.back();
					values.pop_back();
					int val1 = values.back();
					values.pop_back();
					int result;
					switch (op)
					{
					case '+':
						result = val1 + val2;
						break;
					case '-':
						result = val1 - val2;
						break;
					case '*':
						result = val1 * val2;
						break;
					case '/':
						result = val1 / val2;
						break;
					}
					values.push_back(result);
				}
				else
				{
					break;
				}
			}
			ops.push_back(c);
		}
	}
	while (ops.empty() != true)
	{
		char op = ops.back();
		ops.pop_back();
		int val2 = values.back();
		values.pop_back();
		int val1 = values.back();
		values.pop_back();
		int result;
		switch (op)
		{
		case '+':
			result = val1 + val2;
			break;
		case '-':
			result = val1 - val2;
			break;
		case '*':
			result = val1 * val2;
			break;
		case '/':
			result = val1 / val2;
			break;
		}
		values.push_back(result);
	}
	return values[0];
}

bool Solution::test(string s, int answer)	{
	return calculate(s) == answer;
}