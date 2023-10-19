#include "soln.hpp"

vector<vector<int>> Solution::zigzagLevelOrder(TreeNode *root)
{
	vector<vector<int>> result;
	if (!root)
		return result;
	vector<TreeNode *> que{root};
	bool rtl = false;
	for (int level = 0; que.size() > 0; level++)
	{
		int prev_level_size = que.size();
		result.push_back(vector<int>(0));
		for (int i = 0; i < prev_level_size; i++)
		{
			if (que[i]->left)
				que.push_back(que[i]->left);
			if (que[i]->right)
				que.push_back(que[i]->right);
		}
		for (int i = 0; i < prev_level_size; i++)
		{
			if (rtl)
				result[level].push_back(que[prev_level_size - i - 1]->val);
			else
				result[level].push_back(que[i]->val);
		}
		que.erase(que.begin(), que.begin() + prev_level_size);
		rtl = !rtl;
	}
	return result;
}

bool Solution::test(TreeNode *root, vector<vector<int>> answer)
{
	return zigzagLevelOrder(root) == answer;
}