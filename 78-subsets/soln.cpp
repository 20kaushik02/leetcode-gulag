#include "soln.hpp"

vector<vector<int>> Solution::subsets(vector<int> &nums)
{
	int num_combos = 1 << nums.size();
	vector<vector<int>> subs(num_combos);
	for (int i = 0; i < num_combos; i++)
	{
		for (int j = 0; j < nums.size(); j++)
		{
			// check if this index exists in this combo
			if ((i >> j) & 1)
			{
				subs[i].push_back(nums[j]);
			}
		}
	}
	return subs;
}
