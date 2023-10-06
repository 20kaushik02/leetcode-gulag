#include "soln.hpp"

int Solution::max(int a, int b)
{
	return a > b ? a : b;
}
int Solution::maxDepth(TreeNode *root)
{
	if (root == nullptr)
	{
		return 0;
	}
	return max(maxDepth(root->left), maxDepth(root->right)) + 1;
}
bool Solution::test(TreeNode *root, int answer)
{
	return maxDepth(root) == answer;
}