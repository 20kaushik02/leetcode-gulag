#include "soln.hpp"

bool Solution::DEBUG = true;

bool Solution::canArrange(vector<int> &arr, int k)
{
	// vector<int> result = vector<int>();
	// for (int num = 0; num < arr.size(); num++)
	// {
	// 	bool found_pair = false;
	// 	for (int existing = 0; existing < result.size(); existing++)
	// 	{
	// 		if ((arr[num] + result[existing]) % k == 0)
	// 		{
	// 			found_pair = true;
	// 			dbg("pop", result[existing]);
	// 			result.erase(find(result.begin(), result.end(), result[existing]));
	// 			break;
	// 		}
	// 	}
	// 	if (!found_pair)
	// 	{
	// 		result.emplace_back(arr[num]);
	// 		dbg("insert", arr[num]);
	// 	}
	// }
	// return !(result.size() > 0);

	vector<int> rems;
	int zeros = 0;
	for (int i = 0; i < arr.size(); i++)
	{
		if (arr[i] % k == 0)
		{
			zeros++;
		}
		else if (arr[i] % k < 0)
		{
			rems.emplace_back((arr[i] % k) + k);
		}
		else
		{
			rems.emplace_back(arr[i] % k);
		}
	}
	if (zeros % 2)
	{
		return false;
	}
	unordered_map<int, int> result;
	for (int i = 0; i < rems.size(); i++)
	{
		if (result.find(k - rems[i]) != result.end() && result[k - rems[i]] > 0)
		{
			result[k - rems[i]]--;
			dbg("pop", k - rems[i]);
		}
		else
		{
			result[rems[i]] = result[rems[i]] + 1;
			dbg("insert", rems[i]);
		}
	}
	for (auto it = result.begin(); it != result.end(); it++)
	{
		if (it->second > 0)
		{
			return false;
		}
	}
	return true;
}

bool Solution::test(vector<int> &arr, int k, bool answer)
{
	return canArrange(arr, k) == answer;
}