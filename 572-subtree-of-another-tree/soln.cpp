#include "soln.hpp"

bool Solution::isIdenticalTree(TreeNode *t1, TreeNode *t2)
{
	if (!t1 || !t2)
	{
		return t1 == nullptr && t2 == nullptr;
	}
	else if (t1->val == t2->val)
	{
		return isIdenticalTree(t1->left, t2->left) && isIdenticalTree(t1->right, t2->right);
	}
	else
	{
		return false;
	}
}
bool Solution::isSubtree(TreeNode *root, TreeNode *subRoot)
{
	if (!root)
	{
		return false;
	}
	else if (isIdenticalTree(root, subRoot))
	{
		return true;
	}
	else
	{
		return isSubtree(root->left, subRoot) || isSubtree(root->right, subRoot);
	}
}

bool Solution::test(TreeNode *root, TreeNode *subRoot, bool answer)
{
	return isSubtree(root, subRoot) == answer;
}