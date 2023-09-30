#include "soln.hpp"

ListNode *Solution::mergeTwoLists(ListNode *list1, ListNode *list2)
{
	// edge cases
	if (list1 == nullptr)
		return list2;
	else if (list2 == nullptr)
		return list1;

	// first node to pick to start splicing into
	ListNode *ptr;
	if (list1->val > list2->val)
	{
		ptr = list2;
		list2 = list2->next;
	}
	else
	{
		ptr = list1;
		list1 = list1->next;
	}

	// sort out the nodes
	ListNode *current = ptr;
	while (list1 && list2)
	{
		if (list1->val > list2->val)
		{
			current->next = list2;
			list2 = list2->next;
		}
		else
		{
			current->next = list1;
			list1 = list1->next;
		}
		current = current->next;
	}

	// append remaining portions
	if (list1)
	{
		current->next = list1;
	}
	if (list2)
	{
		current->next = list2;
	}
	return ptr;
}