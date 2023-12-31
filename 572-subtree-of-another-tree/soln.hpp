#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode() : val(0), left(nullptr), right(nullptr) {}
	TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
	TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution
{
public:
	bool isIdenticalTree(TreeNode *t1, TreeNode *t2);
	bool isSubtree(TreeNode *root, TreeNode *subRoot);
	bool test(TreeNode *root, TreeNode *subRoot, bool answer);
};