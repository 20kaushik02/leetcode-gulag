#include "soln.hpp"

vector<int> Solution::topKFrequent(vector<int> &nums, int k)
{
	// first get counts
	unordered_map<int, int> counts;
	for (int num : nums)
	{
		counts[num]++;
	}
	// make a vector indexed by counts. nums can have max nums.size() unique elements, +1 for 0
	vector<vector<int>> counts_indexed(nums.size() + 1);
	for (auto count : counts)
		counts_indexed[count.second].push_back(count.first);

	// iterate in reverse order to get most frequent elements
	vector<int> result;
	for (int i = counts_indexed.size() - 1; i > 0; i--)
	{
		for (int j = 0; j < counts_indexed[i].size(); j++)
		{
			result.push_back(counts_indexed[i][j]);
			if (result.size() == k)
				return result;
		}
	}
	return result;
}

bool Solution::test(vector<int> &nums, int k, vector<int> &answer)
{
	return topKFrequent(nums, k) == answer;
}