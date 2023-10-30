#include <bits/stdc++.h>
using namespace std;
class MinStack
{
private:
	vector<pair<int, int>> _stack;
	int total_min;

public:
	MinStack();
	void push(int val);
	void pop();
	int top();
	int getMin();
};