#include "soln.hpp"

vector<int> Solution::twoSum(vector<int> &numbers, int target)
{
	// two sum approach
	// unordered_map<int,int>mp;
	// for(int i = 0; i < numbers.size(); i++) {
	//     if(mp.find(target-numbers[i]) == mp.end())  {
	//         mp[numbers[i]] = i;
	//     } else  {
	//         return vector<int>{(mp.find(target-numbers[i])->second)+1, i+1};
	//     }
	// }
	// return vector<int>{-1,-1};
	int left = 0, right = numbers.size() - 1;
	int sum = numbers[left] + numbers[right];
	while (sum != target)
	{
		if (sum < target)
		{
			left++;
		}
		else
		{
			right--;
		}
		sum = numbers[left] + numbers[right];
	}
	return {left + 1, right + 1};
}

bool Solution::test(vector<int> &numbers, int target, vector<int> &answer)
{
	return twoSum(numbers, target) == answer;
}