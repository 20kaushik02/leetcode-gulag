#include "soln.hpp"

int Solution::evalRPN(vector<string> &tokens)
{
	vector<int> operands;
	int a, b;
	for (int i = 0; i < tokens.size(); i++)
	{
		if (tokens[i].length() > 1 || isdigit(tokens[i][0]))
		{
			operands.push_back(stoi(tokens[i]));
		}
		else
		{
			b = operands.back();
			operands.pop_back();
			a = operands.back();
			operands.pop_back();
			switch (tokens[i][0])
			{
			case '+':
				operands.push_back(a + b);
				break;
			case '-':
				operands.push_back(a - b);
				break;
			case '*':
				operands.push_back(a * b);
				break;
			case '/':
				operands.push_back(a / b);
				break;
			}
		}
	}
	return operands[0];
}

bool Solution::test(vector<string> &tokens, int answer)
{
	return evalRPN(tokens) == answer;
}