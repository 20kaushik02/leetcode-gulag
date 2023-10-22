#include "soln.hpp"

int Solution::search(vector<int> &nums, int target)
{
	int low = 0, high = nums.size() - 1;
	int mid;
	while (low != high)
	{
		mid = (low + high) / 2;
		if (nums[mid] == target)
			return mid;
		else if (nums[mid] < target)
			low = mid + 1;
		else
			high = mid;
	}
	if (nums[low] == target)
		return low;
	return -1;
}

bool Solution::test(vector<int> &nums, int target, int answer)
{
	return search(nums, target) == answer;
}