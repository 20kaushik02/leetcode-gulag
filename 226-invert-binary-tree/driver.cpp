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
	// answer
	TreeNode n_9 = TreeNode(9);
	TreeNode n_6 = TreeNode(6);
	TreeNode n_3 = TreeNode(3);
	TreeNode n_1 = TreeNode(1);
	TreeNode n_7 = TreeNode(7, &n_9, &n_6);
	TreeNode n_2 = TreeNode(2, &n_3, &n_1);
	TreeNode n_4 = TreeNode(4, &n_7, &n_2);

	Solution soln;
	TreeNode *solved_n4 = soln.invertTree(&n4);
	cout << "Inverted binary tree correctly? " << soln.test(solved_n4, &n_4) << endl;
	return 0;
}