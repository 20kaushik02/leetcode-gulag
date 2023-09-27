#include "soln.hpp"
#include <cmath>

int Solution::mySqrt(int x)
{
	// base case
	if (x == 0 || x == 1)
	{
		return x;
	}
	// effectively only till ~sqrt(x)
	for (int i = 2; i <= x; i++)
	{
		long i_square = long(i) * i;
		// x is a perfect square
		if (i_square == x)
		{
			return int(i);
		}
		// x is not a perfect square
		else if (i_square > x)
		{
			return int(i - 1);
		}
	}
	return -1; // compiler fuss
}

bool Solution::test(int x, int answer)
{
	return answer == mySqrt(x);
}