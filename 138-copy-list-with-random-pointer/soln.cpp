#include "soln.hpp"

void Solution::insertNode(Node *head, Node *newnode)
{
	newnode->next = head->next;
	head->next = newnode;
}
Node *Solution::copyRandomList(Node *head)
{
	if (head == nullptr)
	{
		return nullptr;
	}
	vector<pair<int, Node *>> nodemap;
	vector<pair<int, int>> randindexmap;
	Node *current = head;
	for (int i = 0; current != nullptr; i++)
	{
		nodemap.push_back(pair<int, Node *>{i, current});
		current = current->next;
	}

	for (auto it : nodemap)
	{
		if (it.second->random == nullptr)
		{
			randindexmap.push_back(pair<int, int>{it.first, -1});
			continue;
		}
		for (auto itr : nodemap)
		{
			if (it.second->random == itr.second)
			{
				randindexmap.push_back(pair<int, int>{it.first, itr.first});
				break;
			}
		}
	}

	Node *new_head_ptr = new Node(nodemap[0].second->val);
	current = new_head_ptr;
	for (int i = 1; i < nodemap.size(); i++)
	{
		Node *new_node = new Node(nodemap[i].second->val);
		insertNode(current, new_node);
		current = current->next;
	}

	nodemap.clear();
	current = new_head_ptr;
	for (int i = 0; current != nullptr; i++)
	{
		nodemap.push_back(pair<int, Node *>{i, current});
		current = current->next;
	}

	for (int i = 0; i < nodemap.size(); i++)
	{

		if (randindexmap[i].second == -1)
		{
			nodemap[i].second->random = nullptr;
		}
		else
		{
			nodemap[i].second->random = nodemap[randindexmap[i].second].second;
		}
	}

	return new_head_ptr;
}