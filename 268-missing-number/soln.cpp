#include "soln.hpp"

int Solution::missingNumber(vector<int> &nums)
{
	int n = nums.size();
	int calc_sum = (n * (n + 1)) / 2;
	int act_sum = 0;
	for (int num : nums)
	{
		act_sum += num;
	}
	return calc_sum - act_sum;
}

bool Solution::test(vector<int> &nums, int answer)
{
	return missingNumber(nums) == answer;
}