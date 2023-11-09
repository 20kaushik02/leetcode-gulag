#include "soln.hpp"

int Solution::largestRectangleArea(vector<int> &heights)
{
	if (heights.size() == 1)
	{
		return heights[0];
	}
	stack<pair<int, int>> stk;
	int max_area = 0, max_area_old;
	for (int i = 0; i < heights.size(); i++)
	{
		// empty stk, or increasing => push to stk
		// cout << i << " " << heights[i] << endl;
		if (stk.empty())
		{
			stk.push({i, heights[i]});
			// cout << "stack empty" << endl;
		}
		else if (heights[i] >= stk.top().second)
		{
			stk.push({i, heights[i]});
			// cout << "greater height, pushing" << endl;
		}
		// fun
		else
		{
			int new_top_index = i;
			// cout << "lower height" << endl;
			while (!stk.empty() && heights[i] < stk.top().second)
			{
				// cout << "popping " << stk.top().first << " " << stk.top().second << endl;
				max_area_old = (i - stk.top().first) * stk.top().second;
				max_area = max(max_area, max_area_old);
				new_top_index = stk.top().first;
				stk.pop();
			}
			stk.push({new_top_index, heights[i]});
		}
		// cout << "maxarea = " << max_area << endl;
	}

	// cout << "non-empty stack at end, popping" << endl;
	while (!stk.empty())
	{
		// cout << stk.top().first << " " << stk.top().second << endl;
		max_area_old = (heights.size() - stk.top().first) * stk.top().second;
		max_area = max(max_area, max_area_old);
		stk.pop();
	}
	return max_area;
}

bool Solution::test(vector<int> &heights, int answer)
{
	return largestRectangleArea(heights) == answer;
}