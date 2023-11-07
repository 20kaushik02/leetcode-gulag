#include "soln.hpp"

bool Solution::isHappy(int n)
{
	// naive
	unordered_map<int, bool> occurrences{{n, true}};
	int tmp, tmp_sum;
	while (n != 1)
	{
		tmp = n;
		tmp_sum = 0;
		while (tmp > 0)
		{
			tmp_sum += (tmp % 10) * (tmp % 10);
			tmp /= 10;
		}
		// cycle
		if (occurrences.find(tmp_sum) != occurrences.end())
		{
			return false;
		}
		occurrences[tmp_sum] = true;
		n = tmp_sum;
	}
	return n == 1;

	// floyd cycle finding is better
}

bool Solution::test(int n, bool answer)
{
	return isHappy(n) == answer;
}