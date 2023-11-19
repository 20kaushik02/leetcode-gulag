#include "soln.hpp"

int Solution::findMin(vector<int> &nums)
{
	int low = 0, high = nums.size() - 1, mid;
	while (low < high)
	{
		// current subarray is unrotated
		if (nums[high] > nums[low])
		{
			return nums[low];
		}
		mid = (low + high) / 2;
		// left half
		if (nums[low] > nums[mid])
		{
			high = mid;
		}
		// right half
		else
		{
			low = mid + 1;
		}
	}
	return nums[low];
}

bool Solution::test(vector<int> &nums, int answer)
{
	return findMin(nums) == answer;
}
