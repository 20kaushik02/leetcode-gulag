#include "soln.hpp"

int Solution::singleNumber(vector<int> &nums)
{
	int uniq = 0;
	for (int num : nums)
	{
		uniq ^= num;
	}
	return uniq;
}

bool Solution::test(vector<int>& nums, int answer)	{
	return singleNumber(nums) == answer;
}