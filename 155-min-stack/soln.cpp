#include "soln.hpp"

MinStack::MinStack()
{
	_stack = {};
	total_min = INT_MAX;
}

void MinStack::push(int val)
{
	total_min = min(int(val), total_min);
	_stack.push_back({val, total_min});
}

void MinStack::pop()
{
	_stack.pop_back();
	if (_stack.size() == 0)
		total_min = INT_MAX;
	else
		total_min = _stack.back().second;
}

int MinStack::top()
{
	return int(_stack.back().first);
}

int MinStack::getMin()
{
	return int(_stack.back().second);
}