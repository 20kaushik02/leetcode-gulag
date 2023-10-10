#include "soln.hpp"

int main()	{
	// [[1,1,1],[1,0,1],[1,1,1]]
	vector<int> v1 = vector<int>{0,1,1};
	vector<int> v2 = vector<int>{1,1,1};
	vector<int> v3 = vector<int>{1,1,1};
	
	vector<int> v_1 = vector<int>{0,0,0};
	vector<int> v_2 = vector<int>{0,1,1};
	vector<int> v_3 = vector<int>{0,1,1};

	vector<vector<int>> matrix = vector<vector<int>>{v1,v2,v3};
	vector<vector<int>> answer = vector<vector<int>>{v_1,v_2,v_3};
	Solution soln;
	cout << "Set zeroes correctly? " << soln.test(matrix, answer) << endl;
	return 0;
}