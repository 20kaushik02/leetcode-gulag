#include "soln.hpp"

int Solution::diameterOfBinaryTree(TreeNode *root)
{
	int max_dia = 0;
	height(root, max_dia);
	return max_dia;
}

int Solution::height(TreeNode *subroot, int &max_dia)
{
	if (!subroot)
		return 0;
	int left_child_height = height(subroot->left, max_dia);
	int right_child_height = height(subroot->right, max_dia);
	// max_dia for all in this subtree is left_h + right_h, so check global maximum
	max_dia = max(max_dia, left_child_height + right_child_height);
	// for height, we add the edge connecting this subtree to max of child heights
	return 1 + max(left_child_height, right_child_height);
}

bool Solution::test(TreeNode *root, int answer)
{
	return diameterOfBinaryTree(root) == answer;
}