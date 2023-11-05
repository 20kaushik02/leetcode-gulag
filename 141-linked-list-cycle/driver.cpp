#include "soln.hpp"

int main()
{
	ListNode n5 = ListNode(5);
	ListNode n4 = ListNode(4, &n5);
	ListNode n3 = ListNode(3, &n4);
	ListNode n2 = ListNode(2, &n3);
	ListNode n1 = ListNode(1, &n2);
	n5.next = &n3;
	bool answer = true;

	Solution soln;
	cout << "Checked cycle correctly? " << soln.test(&n1, answer) << endl;
	return 0;
}