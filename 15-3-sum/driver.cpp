#include "soln.hpp"

int main()
{
	vector<int> nums{-2,0,1,1,2};
	Solution soln;
	vector<vector<int>> result = soln.threeSum(nums);
	cout << "Three sum triplets:" << endl;
	for (auto itr : result)
	{
		for (int num : itr)
		{
			cout << num << " ";
		}
		cout << endl;
	}
	return 0;
}