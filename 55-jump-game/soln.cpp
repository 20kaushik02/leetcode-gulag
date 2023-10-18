#include "soln.hpp"

bool Solution::canJump(vector<int> &nums)
{
	int n = nums.size();
	int cur_pos = n - 2;
	int gaps = 0;
	int next_connect = n - 1;
	// base cases
	if (n == 1)
		return true;
	if (nums[0] == 0)
		return false;
	// track last known connection to get to end
	while (cur_pos >= 0)
	{
		if (cur_pos + nums[cur_pos] >= next_connect)
		{
			gaps = 0;
			next_connect = cur_pos;
		}
		else
			gaps++;
		cur_pos--;
	}
	return gaps == 0;
}

bool Solution::test(vector<int> &nums, bool answer)
{
	return canJump(nums) == answer;
}