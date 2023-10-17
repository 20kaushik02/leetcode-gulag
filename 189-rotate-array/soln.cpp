#include "soln.hpp"

void Solution::rotate(vector<int> &nums, int k)
{
	int n = nums.size();
	if (n != 1)
	{
		k %= n;
		vector<int> result(nums.begin() + (nums.size() - k), nums.end());
		result.insert(result.end(), nums.begin(), nums.end() - k);
		nums = result;
	}
}

bool Solution::test(vector<int> &nums, int k, vector<int> &answer)
{
	vector<int> nums_copy(nums);
	rotate(nums_copy, k);
	return nums_copy == answer;
}