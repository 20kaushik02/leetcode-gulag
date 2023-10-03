#include "soln.hpp"

int main()
{
	TreeNode n3 = TreeNode(3);
	TreeNode n2 = TreeNode(2, &n3, nullptr);
	TreeNode n1 = TreeNode(1, nullptr, &n2);
	Solution soln;
	cout << "Inorder traversal correct? " << soln.test(&n1, vector<int>{1, 3, 2}) << endl;
	return 0;
}