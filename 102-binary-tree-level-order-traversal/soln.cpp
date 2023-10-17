#include "soln.hpp"

vector<vector<int>> Solution::levelOrder(TreeNode *root)
{
	vector<TreeNode *> tree_queue;
	vector<vector<int>> traversal;
	if (root == nullptr)
	{
		return traversal;
	}
	TreeNode *current = root;
	tree_queue.push_back(current);
	while (!tree_queue.empty())
	{
		traversal.push_back(vector<int>());
		for (auto node : tree_queue)
		{
			if (node != nullptr)
			{
				traversal.back().push_back(node->val);
			}
		}
		int level_size = tree_queue.size();
		for (int i = 0; i < level_size; i++)
		{
			if (tree_queue[0] != nullptr)
			{
				if (tree_queue[0]->left)
					tree_queue.push_back(tree_queue[0]->left);
				if (tree_queue[0]->right)
					tree_queue.push_back(tree_queue[0]->right);
			}
			tree_queue.erase(tree_queue.begin());
		}
	}
	return traversal;
}

bool Solution::test(TreeNode *root, vector<vector<int>> answer)
{
	return levelOrder(root) == answer;
}
