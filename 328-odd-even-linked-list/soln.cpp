#include "soln.hpp"

ListNode *Solution::oddEvenList(ListNode *head)
{
	bool odd_node = true;
	if (head == nullptr || head->next == nullptr || head->next->next == nullptr)
		return head;
	ListNode *even_start = head->next;
	ListNode *cur_node;
	ListNode *next_node = head;
	while (next_node)
	{
		cur_node = next_node;
		next_node = cur_node->next;
		if (next_node == nullptr)
			break;
		cur_node->next = cur_node->next->next;
	}
	cur_node = head;
	while (cur_node->next)
		cur_node = cur_node->next;
	cur_node->next = even_start;
	return head;
}

void Solution::printList(ListNode *head)
{
	ListNode *cur = head;
	while (cur)
	{
		cout << cur->val << " ";
		cur = cur->next;
	}
	cout << endl;
}

bool Solution::test(ListNode *head, ListNode *answer)
{
	ListNode *cur1 = oddEvenList(head), *ans1 = answer;
	while (cur1 && ans1)
	{
		if (cur1->val != ans1->val)
			return false;
		cur1 = cur1->next;
		ans1 = ans1->next;
	}
	if (!cur1 && !ans1)
		return true;
	else
		return false;
}