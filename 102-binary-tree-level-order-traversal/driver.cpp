#include "soln.hpp"

int main()
{
	TreeNode n7 = TreeNode(7);
	TreeNode n15 = TreeNode(15);
	TreeNode n20 = TreeNode(20, &n15, &n7);
	TreeNode n5 = TreeNode(5);
	TreeNode n9 = TreeNode(9, &n5, nullptr);
	TreeNode n3 = TreeNode(3, &n9, &n20);
	vector<vector<int>> answer = {{3}, {9, 20}, {5, 15, 7}};
	Solution soln;
	cout << "Level-order traversal correct? " << soln.test(&n3, answer) << endl;
	return 0;
}