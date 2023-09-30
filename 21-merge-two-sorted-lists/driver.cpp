#include "soln.hpp"

int main()
{
	ListNode l1 = ListNode(2);
	ListNode l2 = ListNode(1);
	Solution soln;
	ListNode *soln_ptr = soln.mergeTwoLists(&l1, &l2);
	while (soln_ptr != nullptr)
	{
		cout << soln_ptr->val << " ";
		soln_ptr = soln_ptr->next;
	}
	delete soln_ptr;
	return 0;
}