#include "soln.hpp"

int main()
{
	int numCourses = 4;
	vector<vector<int>> prerequisites{{0, 1}, {0, 2}, {3, 0}};
	Solution soln;
	cout << "Ordering of courses:" << endl;
	for (int num : soln.findOrder(numCourses, prerequisites))
		cout << "->" << num;
	cout << endl;
	return 0;
}