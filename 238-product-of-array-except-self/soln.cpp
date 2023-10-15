#include "soln.hpp"

vector<int> Solution::productExceptSelf(vector<int> &nums)
{
	int n = nums.size();
	vector<int> pres(n);
	vector<int> sufs(n);
	vector<int> result(n);
	// calculate prefixes starting from second
	int cur = 1;
	for (int i = 1; i < n; i++)
	{
		pres[i] = cur * nums[i - 1];
		cur = pres[i];
	}
	// calculate suffixes starting from second last
	cur = 1;
	for (int j = n - 2; j >= 0; j--)
	{
		sufs[j] = cur * nums[j + 1];
		cur = sufs[j];
	}

	result[0] = sufs[0];
	result[n - 1] = pres[n - 1];
	for (int i = 1; i < n - 1; i++)
	{
		result[i] = pres[i] * sufs[i];
	}
	return result;
}

bool Solution::test(vector<int>& nums, vector<int>& answer)	{
	return productExceptSelf(nums) == answer;
}