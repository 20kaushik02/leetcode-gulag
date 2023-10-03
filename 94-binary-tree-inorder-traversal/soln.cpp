#include "soln.hpp"

vector<int> Solution::inorderTraversal(TreeNode *root)
{
	vector<int> tmp;
	if (root != nullptr)
	{
		vector<int> tmp_left = inorderTraversal(root->left);
		vector<int> tmp_right = inorderTraversal(root->right);
		tmp.insert(tmp.end(), tmp_left.begin(), tmp_left.end());
		tmp.push_back(root->val);
		tmp.insert(tmp.end(), tmp_right.begin(), tmp_right.end());
	}
	return tmp;
}

bool Solution::test(TreeNode *root, vector<int> answer)	{
	return inorderTraversal(root) == answer;
}