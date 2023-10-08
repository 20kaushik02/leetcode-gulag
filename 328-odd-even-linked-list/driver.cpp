#include "soln.hpp"

int main()
{
	ListNode n5 = ListNode(5);
	ListNode n4 = ListNode(4, &n5);
	ListNode n3 = ListNode(3, &n4);
	ListNode n2 = ListNode(2, &n3);
	ListNode n1 = ListNode(1, &n2);
	
	ListNode n_4 = ListNode(4);
	ListNode n_2 = ListNode(2, &n_4);
	ListNode n_5 = ListNode(5, &n_2);
	ListNode n_3 = ListNode(3, &n_5);
	ListNode n_1 = ListNode(1, &n_3);
	
	Solution soln;
	soln.printList(&n1);
	soln.printList(&n_1);
	cout << "Grouped odd-even correctly? " << soln.test(&n1, &n_1) << endl;
	return 0;
}