#include "soln.hpp"

int Solution::longestConsecutive(vector<int> &nums)
{
	if (nums.size() < 2)
		return nums.size();
	sort(nums.begin(), nums.end());
	int max_len = 1, cur_max_len = 1;
	for (int i = 1; i < nums.size(); i++)
	{
		if (nums[i] == nums[i - 1])
			continue;
		if ((nums[i] == nums[i - 1] + 1))
			cur_max_len++;
		else
		{
			max_len = max(cur_max_len, max_len);
			cur_max_len = 1;
		}
	}
	return max(max_len, cur_max_len);
}

bool Solution::test(vector<int> &nums, int answer)
{
	return longestConsecutive(nums) == answer;
}