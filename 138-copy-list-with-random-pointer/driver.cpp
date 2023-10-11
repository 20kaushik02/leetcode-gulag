#include "soln.hpp"

int main()
{
	Node n1(7);
	Node n2(13);
	Node n3(11);
	Node n4(10);
	Node n5(1);
	n1.next = &n2;
	n2.next = &n3;
	n2.random = &n1;
	n3.next = &n4;
	n3.random = &n5;
	n4.next = &n5;
	n4.random = &n3;
	n5.random = &n1;

	Solution soln;
	Node *n_1 = soln.copyRandomList(&n1);

	Node *h1 = &n1, *h_1 = n_1;
	while (h1 != nullptr && h_1 != nullptr)
	{
		cout << h1->val << ", " << ((h1->random != nullptr) ? h1->random->val : -9999) << endl;
		cout << h_1->val << ", " << ((h_1->random != nullptr) ? h_1->random->val : -9999) << endl;
		h1 = h1->next, h_1 = h_1->next;
	}
	return 0;
}