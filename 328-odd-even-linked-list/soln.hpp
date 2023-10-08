#include <bits/stdc++.h>

using namespace std;

/* Singly linked list*/
struct ListNode
{
	int val;
	ListNode *next;
	ListNode() : val(0), next(nullptr) {}
	ListNode(int x) : val(x), next(nullptr) {}
	ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution	{
	public:
		ListNode* oddEvenList(ListNode* head);
		void printList(ListNode* head);
		bool test(ListNode* head, ListNode* answer);
};