#include "soln.hpp"

int Solution::minCostClimbingStairs(vector<int> &cost)
{
	int n = cost.size();
	for (int i = 2; i < n; i++)
	{
		cost[i] += min(cost[i - 1], cost[i - 2]);
	}
	return min(cost[n - 1], cost[n - 2]);
}

bool Solution::test(vector<int> &cost, int answer)
{
	return minCostClimbingStairs(cost) == answer;
}
