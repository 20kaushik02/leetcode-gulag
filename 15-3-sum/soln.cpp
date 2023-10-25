#include "soln.hpp"

vector<vector<int>> Solution::threeSum(vector<int> &nums)
{
	vector<vector<int>> result;
	sort(nums.begin(), nums.end());
	int low, high, sum;
	vector<int> new_triplet;
	for (int i = 0; i < nums.size() - 2; i++)
	{
		if (i > 0 && nums[i] == nums[i - 1])
			continue;
		// two sum
		int low = i + 1, high = nums.size() - 1;
		while (low < high)
		{
			// if(nums[low] == nums[low-1])    {
			//     low++;
			//     continue;
			// }
			// if(nums[high] == nums[high+1])    {
			//     high--;
			//     continue;
			// }
			sum = nums[i] + nums[low] + nums[high];
			if (sum == 0)
			{
				new_triplet = vector<int>{nums[i], nums[low], nums[high]};
				// if(find(result.begin(), result.end(), new_triplet) == result.end()) {
				result.push_back({nums[i], nums[low], nums[high]});
				// }
				low++;
				while (nums[low] == nums[low - 1] && low < high)
					low++;
			}
			else if (sum > 0)
			{
				high--;
			}
			else
			{
				low++;
			}
		}
	}
	return result;
}
