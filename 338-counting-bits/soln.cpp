#include "soln.hpp"

vector<int> Solution::countBits(int n)
{
	vector<int> result(n + 1);
	// // O(n log n) approach, naive
	// // O(n)
	// int num;
	// for(int i = 0; i <= n; i++)  {
	//     num = i;
	//     // O(log n)
	//     while(num)    {
	//         result[i] += num&1;
	//         num=num>>1;
	//     }
	// }

	// O(n) approach
	result[0] = 0;
	if (n == 0)
	{
		return result;
	}
	for (int i = 1; i < n + 1; i = i * 2)
	{
		for (int j = i; (j < i * 2) && (j < n + 1); j++)
		{
			result[j] = result[(j / i) + (j - i) - 1] + 1;
		}
	}
	return result;
}

bool Solution::test(int n, vector<int> &answer)
{
	return countBits(n) == answer;
}