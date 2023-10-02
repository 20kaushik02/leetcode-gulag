#include "soln.hpp"

int Solution::climbStairs(int n)
{
	if (n < 4)
		return n;

	long minus_one = 3;
	long minus_two = 2;
	long steps = 0;

	for (int i = 3; i < n; i++)
	{
		// climb one
		steps = minus_one + minus_two;
		minus_two = minus_one;
		minus_one = steps;
	}

	return steps;
}

bool Solution::test(int n, long answer)	{
	return climbStairs(n) == answer;
}