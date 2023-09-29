#include "soln.hpp"

int Solution::majorityElement(vector<int> &nums)
{
	map<int, int> counts;
	for (auto &it : nums)
	{
		counts[it]++;
		if (counts[it] > (nums.size() / 2))
			return it;
	}
	return -1;
}

bool Solution::test(vector<int>& nums, int answer)	{
	return majorityElement(nums) == answer;
}