#include "soln.hpp"

int Solution::search(vector<int> &nums, int target)
{
	if (nums.size() == 1)
	{
		return nums[0] == target ? 0 : -1;
	}
	else if (nums.size() == 2)
	{
		return nums[0] == target ? 0 : nums[1] == target ? 1
														 : -1;
	}
	int low = 0, high = nums.size() - 1, mid, pivot = -1;
	// check 0 rotation edge cases
	// if so, perform binary search right here
	if (nums[low] < nums[high])
	{
		while (low < high)
		{
			mid = (low + high) / 2;
			if (nums[mid] == target)
			{
				return mid;
			}
			else if (nums[mid] < target)
			{
				low = mid + 1;
			}
			else
			{
				high = mid - 1;
			}
		}
		return nums[low] == target ? low : -1;
	}
	// find pivot
	low = 0, high = nums.size() - 1;
	while (low < high)
	{
		mid = (low + high) / 2;
		if (
			(mid == 0 && nums[mid] > nums[mid + 1]) ||
			(mid != 0 && nums[mid] >= nums[mid - 1] && nums[mid] > nums[mid + 1]))
		{
			pivot = mid;
			break;
		}
		if (nums[mid] < nums[low])
		{
			high = mid;
		}
		else
		{
			low = mid + 1;
		}
	}
	// find half it should be in
	low = 0, high = nums.size() - 1;
	if (target < nums[low])
	{
		low = pivot + 1;
	}
	else
	{
		high = pivot;
	}
	// binary search that half
	while (low < high)
	{
		mid = (low + high) / 2;
		if (nums[mid] == target)
		{
			return mid;
		}
		else if (nums[mid] < target)
		{
			low = mid + 1;
		}
		else
		{
			high = mid - 1;
		}
	}
	return nums[low] == target ? low : -1;
}

bool Solution::test(vector<int> &nums, int target, int answer)
{
	return search(nums, target) == answer;
}
