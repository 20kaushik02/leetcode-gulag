#include "soln.hpp"

int main()
{
	// input
	TreeNode n1 = TreeNode(1);
	TreeNode n3 = TreeNode(3);
	TreeNode n6 = TreeNode(6);
	TreeNode n9 = TreeNode(9);
	TreeNode n2 = TreeNode(2, &n1, &n3);
	TreeNode n7 = TreeNode(7, &n6, &n9);
	TreeNode n4 = TreeNode(4, &n2, &n7);
	int answer = 4;
	Solution soln;
	cout << "Found diameter correctly? " << soln.test(&n4, answer) << endl;
	return 0;
}