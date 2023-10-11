#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
	int val;
	Node *next;
	Node *random;

	Node(int _val)
	{
		val = _val;
		next = NULL;
		random = NULL;
	}
};

class Solution
{
public:
	void insertNode(Node *head, Node *newnode);
	Node *copyRandomList(Node *head);
};