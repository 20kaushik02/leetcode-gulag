#include "soln.hpp"

TreeNode *Solution::invertTree(TreeNode *root)
{
	if (root != nullptr)
	{
		TreeNode *tmp = root->left;
		root->left = root->right;
		root->right = tmp;
		invertTree(root->left);
		invertTree(root->right);
	}
	return root;
}

bool Solution::test(TreeNode *solved_root, TreeNode *answer)
{
	if(solved_root == nullptr && answer == nullptr)	{
		return true;
	}
	if (solved_root != nullptr && answer != nullptr)
	{
		if (solved_root->val != answer->val)
		{
			return false;
		}
		return Solution::test(solved_root->left, answer->left) && Solution::test(solved_root->right, answer->right);
	} else	{
		return false;
	}
}