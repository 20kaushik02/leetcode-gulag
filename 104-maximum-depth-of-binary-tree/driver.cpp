#include "soln.hpp"

int main()	{
	TreeNode n7 = TreeNode(7);
	TreeNode n15 = TreeNode(15);
	TreeNode n20 = TreeNode(20, &n15, &n7);
	TreeNode n9 = TreeNode(9);
	TreeNode n3 = TreeNode(3, &n9, &n20);
	int answer = 3;
	Solution soln;
	cout << "Found depth correctly? " << soln.test(&n3, answer) << endl;
	return 0;
}