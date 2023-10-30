#include "soln.hpp"

int main()
{
	MinStack *minStack = new MinStack();
	minStack->push(-2);
	minStack->push(0);
	minStack->push(-3);
	cout << minStack->getMin() << endl; // return -3
	minStack->pop();
	cout << minStack->top() << endl;	// return 0
	cout << minStack->getMin() << endl; // return -2
	return 0;
}