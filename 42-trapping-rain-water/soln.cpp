#include "soln.hpp"

// Neetcode's two pointer approach
int Solution::trap(vector<int> &height)
{
	if (height.size() < 3)
		return 0;
	int water = 0;
	int left = 0, right = height.size() - 1;
	int left_max = height[left], right_max = height[right];
	bool coming_from_left;
	while (left < right)
	{
		coming_from_left = left_max <= right_max;
		if (coming_from_left)
		{
			left++;
			water += max(left_max - height[left], 0);
			left_max = max(left_max, height[left]);
		}
		else
		{
			right--;
			water += max(right_max - height[right], 0);
			right_max = max(right_max, height[right]);
		}
	}
	return water;
}

bool Solution::test(vector<int> &height, int answer)
{
	return trap(height) == answer;
}
