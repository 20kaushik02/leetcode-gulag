#include "soln.hpp"

vector<int> Solution::findOrder(int numCourses, vector<vector<int>> &prerequisites)
{
	vector<vector<int>> adj(numCourses); // adjacency list
	vector<int> ans_order;
	vector<int> in_degrees(numCourses);

	for (vector<int> &p : prerequisites)
	{
		adj[p[1]].push_back(p[0]); // [1,0] -> course 1 will have incoming edge from 0
		in_degrees[p[0]]++;		   // increment in degree of course 1
	}

	// find starting nodes, which don't hv prereqs
	// so this will be 0 alone
	queue<int> bfs_q;
	for (int i = 0; i < numCourses; i++)
	{
		if (in_degrees[i] == 0)
			bfs_q.push(i);
	}

	// BFS
	while (bfs_q.size())
	{
		int cur = bfs_q.front();
		bfs_q.pop();
		ans_order.push_back(cur);
		for (int out_node : adj[cur])
		{
			// check if no more prereqs
			// if yes, bfs on that
			if (in_degrees[out_node] == 1)
				bfs_q.push(out_node);
			in_degrees[out_node]--;
		}
	}
	// if solution exists, answer will have all courses
	if (ans_order.size() == numCourses)
		return ans_order;
	return {};
}