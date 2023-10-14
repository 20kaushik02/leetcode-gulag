#include "soln.hpp"

int main()	{
	vector<int> nums{1,2,3};
	Solution soln;
	vector<vector<int>> answer = soln.subsets(nums);
	for(int i = 0; i < answer.size(); i++)	{
		cout << "Subset " << (i+1) << ": ";
		for(int j = 0; j < answer[i].size(); j++)	{
			cout << answer[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}