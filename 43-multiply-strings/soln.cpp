#include "soln.hpp"

string Solution::multiply(string num1, string num2)
{
	// product can't have more digits than sum of individual num's digits
	string prod(num1.size() + num2.size(), '0');
	int carry, tmp;

	// standard multiplication
	// one digit of num1 with all of num2, accumulate
	for (int i = num1.size() - 1; i >= 0; i--)
	{
		carry = 0;
		for (int j = num2.size() - 1; j >= 0; j--)
		{
			tmp = (num1[i] - '0') * (num2[j] - '0') + (prod[i + j + 1] - '0') + carry;
			prod[i + j + 1] = (tmp % 10) + '0';
			carry = tmp / 10;
		}
		prod[i] += carry;
	}

	// strip leading zeroes
	int start_pos = prod.find_first_not_of("0");
	if (start_pos != -1)
		return prod.substr(start_pos);
	return "0";
}

bool Solution::test(string num1, string num2, string answer)
{
	return multiply(num1, num2) == answer;
}